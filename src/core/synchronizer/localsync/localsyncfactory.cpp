#include "localsyncfactory.h"
#include "localsync.h"
#include "synchronizer/synchronizeritem.h"
using namespace vnotex;

LocalSyncFactory::LocalSyncFactory()
{
}

LocalSyncFactory::~LocalSyncFactory()
{
}

QSharedPointer<ISynchronizer> LocalSyncFactory::createSynchronizer() const
{
    return QSharedPointer<LocalSync>::create(getName());
}

QSharedPointer<SynchronizerItem> LocalSyncFactory::createEmptySynchronzerItem() const
{
    return QSharedPointer<SynchronizerItem>::create();
}

ISynchronizerLayout *LocalSyncFactory::createSynchronizerLayout(QWidget *p_parent) const
{
    // to do nothing
    return nullptr;
}

QString LocalSyncFactory::getName() const
{
    return QStringLiteral("local_sync.vnotex");
}

QString LocalSyncFactory::getDescription() const
{
    return QObject::tr("Local Synchronizer");
}

QString LocalSyncFactory::getDisplayName() const
{
    return QObject::tr("Local Synchronizer");
}

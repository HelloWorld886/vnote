#include "gitsyncfactory.h"
#include "gitsyncitem.h"
using namespace vnotex;

GitSyncFactory::GitSyncFactory()
{
}

GitSyncFactory::~GitSyncFactory()
{
}

QSharedPointer<SynchronizerItem> GitSyncFactory::createEmptySynchronzerItem() const
{
    return QSharedPointer<GitSyncItem>::create();
}

QSharedPointer<ISynchronizer> GitSyncFactory::createSynchronizer() const
{

}

ISynchronizerLayout *GitSyncFactory::createSynchronizerLayout(QWidget *p_parent) const
{
}

QString GitSyncFactory::getName() const
{
    return QStringLiteral("git_sync.vnotex");
}

QString GitSyncFactory::getDescription() const
{
    return QStringLiteral("sync the notebook by git");
}

QString GitSyncFactory::getDisplayName() const
{
    return QStringLiteral("git synchronizer");
}

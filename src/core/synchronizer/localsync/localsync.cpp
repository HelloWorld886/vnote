#include "localsync.h"
#include "synchronizer/synchronizeritem.h"
using namespace vnotex;


LocalSync::LocalSync(const QString &name)
    :ISynchronizer(name)
{

}

LocalSync::~LocalSync()
{

}

QSharedPointer<SynchronizerItem> LocalSync::toSynchronizerItem() const
{
     QSharedPointer<SynchronizerItem> item = QSharedPointer<SynchronizerItem>::create();
    item->m_name = m_name;
    return item;
}

void LocalSync::setDataByLayout(ISynchronizerLayout *layout)
{
    Q_ASSERT(!layout);
    // to do nothing
}

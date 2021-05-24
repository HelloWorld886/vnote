#include "gitsync.h"
#include "gitsyncitem.h"
using namespace vnotex;

GitSync::GitSync(const QString &name)
    :ISynchronizer(name)
{

}

QSharedPointer<SynchronizerItem> GitSync::toSynchronizerItem() const
{
    QSharedPointer<GitSyncItem> item = QSharedPointer<GitSyncItem>::create();

    item->m_url = m_url;
    item->m_token = m_token;

    return item;
}

void GitSync::setDataByLayout(ISynchronizerLayout *layout)
{

}



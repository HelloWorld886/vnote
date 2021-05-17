#include "localsync.h"
#include "synchronizer/synchronizeritem.h"
using namespace vnotex;


LocalSync::LocalSync(const QString &p_name,
                     const QString &p_displayName,
                     const QString &p_description)
    :m_info(p_name, p_displayName, p_description)
{

}

LocalSync::~LocalSync()
{

}

QString LocalSync::getName() const
{
    return m_info.m_name;
}

QString LocalSync::getDescription() const
{
    return m_info.m_description;
}

QString LocalSync::getDisplayName() const
{
   return m_info.m_displayName;
}

SynchronizerItem LocalSync::toSynchronizerItem() const
{
    SynchronizerItem item;
    item.m_name = getName();
    return item;
}

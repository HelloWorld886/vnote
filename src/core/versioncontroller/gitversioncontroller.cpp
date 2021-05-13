#include "gitversioncontroller.h"
using namespace vnotex;


GitVersionController::GitVersionController(
        const QString &p_name,
        const QString &p_displayName,
        const QString &p_description,
        QObject *p_parent)
    :IVersionController(p_parent),
      m_info(p_name, p_displayName, p_description)
{

}

QString vnotex::GitVersionController::getName() const
{
    return m_info.m_name;
}

QString vnotex::GitVersionController::getDescription() const
{
    return m_info.m_description;
}

QString vnotex::GitVersionController::getDisplayName() const
{
    return m_info.m_displayName;
}

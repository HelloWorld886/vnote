#include "synchronizeritem.h"
using namespace vnotex;

bool vnotex::SynchronizerItem::operator==(const vnotex::SynchronizerItem &p_other) const
{
    return m_name == p_other.m_name;
}

void vnotex::SynchronizerItem::fromJson(const QJsonObject &p_jobj)
{
    m_name = p_jobj[QStringLiteral("name")].toString();
}

QJsonObject vnotex::SynchronizerItem::toJson() const
{
    QJsonObject jobj;
    jobj[QStringLiteral("name")] = m_name;

    return jobj;
}

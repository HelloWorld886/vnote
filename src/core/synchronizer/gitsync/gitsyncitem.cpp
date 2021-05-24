#include "gitsyncitem.h"
using namespace vnotex;

QJsonObject GitSyncItem::toJson() const
{
    QJsonObject jobj = SynchronizerItem::toJson();
    jobj[QStringLiteral("url")] = m_url;
    jobj[QStringLiteral("token")] = m_token;

    return jobj;
}

void GitSyncItem::fromJson(const QJsonObject &p_jobj)
{
    SynchronizerItem::fromJson(p_jobj);
    m_url = p_jobj[QStringLiteral("url")].toString();
    m_token = p_jobj[QStringLiteral("token")].toString();
}

bool GitSyncItem::operator==(const GitSyncItem &p_other) const
{
    return SynchronizerItem::operator==(p_other) &&
            m_url == p_other.m_url &&
            m_token == p_other.m_token;
}

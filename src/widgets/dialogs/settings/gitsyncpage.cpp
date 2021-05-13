#include "gitsyncpage.h"
#include "widgets/widgetsfactory.h"
#include "configmgr.h"
#include "coreconfig.h"
#include <QLineEdit>
#include <QFormLayout>
#include <QLabel>
#include <QIntValidator>
#include <QRadioButton>
using namespace vnotex;

GitSyncPage::GitSyncPage(QWidget *p_parent)
    :SettingsPage(p_parent)
{
    setupUI();
}

void GitSyncPage::setupUI()
{
    auto mainLayout = WidgetsFactory::createFormLayout(this);

    // Timeout
    {
        const QString timeoutLabel(tr("Timeout failed(second)"));

        m_timeoutEdit = WidgetsFactory::createLineEdit(this);
        m_timeoutEdit->setValidator(new QIntValidator(0, 99999, this));
        connect(m_timeoutEdit, &QLineEdit::textChanged, this, &GitSyncPage::pageIsChanged);

        mainLayout->addRow(timeoutLabel, m_timeoutEdit);
    }
}

QString GitSyncPage::title() const
{
    return tr("Sync");
}

void GitSyncPage::loadInternal()
{
    const auto &coreConfig = ConfigMgr::getInst().getCoreConfig();

    if(m_timeoutEdit)
    {
        int timeout = coreConfig.getSyncTimeout();
        m_timeoutEdit->setText(QString("%1").arg(timeout));
    }
}

void GitSyncPage::saveInternal()
{
    auto &coreConfig = ConfigMgr::getInst().getCoreConfig();

    if(m_timeoutEdit)
    {
        const int timeout = m_timeoutEdit->text().toInt();
        coreConfig.setSyncTimeout(timeout);
    }
}

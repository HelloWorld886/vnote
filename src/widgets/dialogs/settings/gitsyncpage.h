#ifndef GITSYNCPAGE_H
#define GITSYNCPAGE_H

#include "settingspage.h"
class QLineEdit;
class QLabel;

namespace vnotex
{
    class GitSyncPage : public SettingsPage
    {
        Q_OBJECT
    public:
        explicit GitSyncPage(QWidget *p_parent = nullptr);

        QString title() const override;

    protected:
        void loadInternal() override;
        void saveInternal() override;

    private:
        void setupUI();

        QLineEdit *m_timeoutEdit;
    };
}

#endif // GITSYNCPAGE_H

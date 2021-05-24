#ifndef GITSYNCLAYOUT_H
#define GITSYNCLAYOUT_H
#include "synchronizer/isynchronizerlayout.h"

class QLineEdit;
class QText;
namespace vnotex {
    class GitSyncLayout : public ISynchronizerLayout
    {
    public:
        GitSyncLayout(QWidget *p_parent = nullptr);

        bool getValidity() const override;

        void triggerCheckValidity() const override;

    private:
        // ui
        QLineEdit *m_urlEdit;
        QLineEdit *m_tokenEdit;

        // data
        bool m_validity;
    };
}


#endif // GITSYNCLAYOUT_H

#ifndef NEWNOTEBOOKDIALOG_H
#define NEWNOTEBOOKDIALOG_H

#include "scrolldialog.h"

namespace vnotex
{
    class NotebookInfoWidget;
    class NotebookParameters;

    class NewNotebookDialog : public ScrollDialog
    {
        Q_OBJECT
    public:
        explicit NewNotebookDialog(QWidget *p_parent = nullptr);

    protected:
        void acceptedButtonClicked() Q_DECL_OVERRIDE;

        virtual bool validateRootFolderInput(QString &p_msg);

        virtual void handleRootFolderPathChanged();

        NotebookInfoWidget *m_infoWidget = nullptr;

    private slots:
        void validateInputs();
        void validateSynchronizerInfo(bool valid);

    private:
        void setupUI();

        void setupNotebookInfoWidget(QWidget *p_parent = nullptr);

        bool validateNameInput(QString &p_msg);

        void setSynchronizerData(const QSharedPointer<NotebookParameters> &parameters);

        // Create a new notebook.
        // Return true if succeeded.
        bool newNotebook();
    };
} // ns vnotex

#endif // NEWNOTEBOOKDIALOG_H

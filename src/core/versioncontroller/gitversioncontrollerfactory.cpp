#include "gitversioncontrollerfactory.h"
#include "qlineedit.h"
#include "widgets/widgetsfactory.h"
#include "qformlayout.h"
#include "gitversioncontroller.h"
#include <QObject>
using namespace vnotex;

GitVersionControllerFactory::GitVersionControllerFactory()
{

}

QString GitVersionControllerFactory::getName() const
{
    return QStringLiteral("git.vnotex");
}

QString GitVersionControllerFactory::getDisplayName() const
{
    return QObject::tr("Git Version Control");
}

QString GitVersionControllerFactory::getDescription() const
{
    return QObject::tr("Git Version Control");
}

void GitVersionControllerFactory::setupNotebookInfoUI(QFormLayout *mainLayout, QWidget *p_parent)
{
    // url
    {
        const QString url(QObject::tr("Git URL"));
        QLineEdit *urlLineEdit = WidgetsFactory::createLineEdit(p_parent);
        mainLayout->addRow(url, urlLineEdit);
    }

    // person access token
    {
        const QString token(QObject::tr("Person Access Token"));
        QLineEdit *tokenLineEdit = WidgetsFactory::createLineEdit(p_parent);
        mainLayout->addRow(token, tokenLineEdit);
    }

    // auto sync
    {
        //TODO
    }
}

QSharedPointer<IVersionController> GitVersionControllerFactory::createVersionController()
{
    return QSharedPointer<GitVersionController>::create(getName(),
                                                          getDisplayName(),
                                                          getDescription());
}



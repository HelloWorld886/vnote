#ifndef GITVERSIONCONTROLLERFACTORY_H
#define GITVERSIONCONTROLLERFACTORY_H
#include "iversioncontrollerfactory.h"

namespace vnotex {
    class GitVersionControllerFactory : public IVersionControllerFactory
    {
    public:
        GitVersionControllerFactory();

        QString getName() const Q_DECL_OVERRIDE;

        QString getDisplayName() const Q_DECL_OVERRIDE;

        QString getDescription()const Q_DECL_OVERRIDE;

        void setupNotebookInfoUI(QFormLayout *mainLayout, QWidget *p_parent = nullptr) Q_DECL_OVERRIDE;

        QSharedPointer<IVersionController> createVersionController() Q_DECL_OVERRIDE;

        SessionConfig::VersionControlItem createVersionControlItem() override;
    };

    struct GitVersionControlItem : SessionConfig::VersionControlItem
    {
        void fromJson(const QJsonObject &p_jobj) override;

        QJsonObject toJson() const override;

        bool operator==(const GitVersionControlItem &p_other) const;
    };
}

#endif // GITVERSIONCONTROLLERFACTORY_H

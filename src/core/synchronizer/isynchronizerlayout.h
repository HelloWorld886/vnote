#ifndef ISYNCHRONIZERLAYOUT_H
#define ISYNCHRONIZERLAYOUT_H
#include <QFormLayout>

namespace vnotex
{
    class ISynchronizerLayout : public QFormLayout
    {
    public:
        ISynchronizerLayout(QWidget *p_parent = nullptr) : QFormLayout(p_parent){}
        virtual ~ISynchronizerLayout(){}

    signals:
        void validityChanged(bool valid);
    public:
        virtual void triggerCheckValidity()const = 0;
        virtual bool getValidity()const = 0;
    };
}

#endif // ISYNCHRONIZERLAYOUT_H

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
    };
}

#endif // ISYNCHRONIZERLAYOUT_H

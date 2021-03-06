#ifndef WATCHER_H
#define WATCHER_H
#include<QObject>
#include<QAction>
#include<QEvent>

#include "iocoingui.h"
class Watcher : public QObject
{
    Q_OBJECT
public:
    explicit Watcher(QObject * parent = Q_NULLPTR);
    virtual bool eventFilter(QObject * watched, QEvent * event) Q_DECL_OVERRIDE;
};

#endif

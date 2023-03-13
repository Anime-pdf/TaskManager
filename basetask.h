#ifndef BASETASK_H
#define BASETASK_H

#include <modules/module.h>
#include <modules/textmodule.h>

#include <QWidget>

class BaseTask : public QWidget
{
    Q_OBJECT
private:
    int m_Group;

    QString m_Title;
    QDate* m_Date;
    QVector<IModule*> m_Modules;
public:
    explicit BaseTask(QWidget *parent, int group);

    QString getTitle() const {return m_Title;}
    QDate* getDate() const {return m_Date;}
    int getGroup() const {return m_Group;}
    const QVector<IModule*> getModules() const { return m_Modules; }

signals:

};

#endif // BASETASK_H

#include "basetask.h"

BaseTask::BaseTask(QWidget *parent, int group)
    : QWidget{parent}
{
    m_Group = group;
    m_Date = nullptr;
    m_Title = "Basic Task";
    m_Modules.push_back(new TextModule());
}

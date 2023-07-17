#include "Task.h"

Task::Task()
{
};

Task::Task(std::string sDescription, std::string sDate, bool bFinished)
{
    m_sDescription = sDescription;
    m_sDate = sDate;
    m_bFinished = bFinished;
}

Task::~Task()
{
};

void Task::setDescription(std::string& sDecription)
{
    m_sDescription = sDecription;
};

const std::string& Task::getDescription()
{
    return m_sDescription;
};

void Task::setDate(std::string& sDate)
{
    m_sDate = sDate;
};

const std::string& Task::getDate()
{
    return m_sDate;
};

void Task::setFinished(bool bFinished)
{
    m_bFinished = bFinished;
};

const bool Task::getFinished()
{
    return m_bFinished;
};

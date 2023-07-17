#include <iostream>
#include <algorithm>
#include <vector>
#include "Task.h"

class TaskController
{
public:
    TaskController();
    virtual ~TaskController();

    virtual void showMenu() = 0;
    virtual void execute() = 0;

protected:
    std::vector<Task> m_tasks;
};

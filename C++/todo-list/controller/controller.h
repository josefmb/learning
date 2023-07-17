#include <iostream>
#include <algorithm>
#include "TaskController.h"
#include "AddController.h"

class Controller
{
public:
    Controller();
    ~Controller();

    const void addTasks();
    const void listTasks();
    const void deleteTasks();
    const void updateTasks();

private:
    std::shared_ptr<TaskController> m_pController;
};

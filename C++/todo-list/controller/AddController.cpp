#include "AddController.h"

AddController::AddController()
{
};

AddController::~AddController()
{
};

void AddController::showMenu()
{
    std::cout << "Main Controller" << std::endl;
    std::cout << "Create tasks and add them to your list" << std::endl;
    
    char c;
    std::string sDesc;
    std::string sDate;

    do
    {   
        std::cout << "Task description: " << std::endl;
        std::cin >> sDesc;

        std::cout << "Task deadline(dd/mm/yyyy): " << std::endl;
        std::cin >> sDate;

        m_tasks.push_back(Task(sDesc, sDate));

        std::cout << "More tasks? (Y/N)" << std::endl;
        std::cin >> c;
    } 
    while (std::toupper(c) != 'N');   
}

void AddController::execute()
{
    //TODO
    //open a file/db and record all the tasks in m_tasks
}

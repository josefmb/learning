#include "controller.h"

Controller::Controller()
{
};

Controller::~Controller()
{
};

const void Controller::addTasks()
{
    m_pController = std::make_shared<AddController>();

    m_pController->showMenu();
    m_pController->execute();
}


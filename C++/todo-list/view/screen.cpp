#include "screen.h"
#include "../utils/options.cpp"

Screen::Screen() 
{
};

Screen::~Screen()
{
};

void Screen::showOptions()
{
    std::cout << "Hi! Welcome to your To-do list!" << std::endl;

    unsigned long ulChoosedOption = 0;
    
    do
    {
        std::cout << "Choose your option: "  << std::endl;
        std::cout << "0 - Quit"              << std::endl;
        std::cout << "1 - Add new tasks"     << std::endl;
        std::cout << "2 - List your tasks"   << std::endl;
        std::cout << "3 - Remove your tasks" << std::endl;
        std::cout << "4 - Update your tasks" << std::endl;

        std::cin >> ulChoosedOption;

        switch (ulChoosedOption)
        {
            case EMenuOptions::eAddTasks:

                break;

            case EMenuOptions::eListTasks:

                break;

            case EMenuOptions::eRemoveTasks:

                break;

            case EMenuOptions::eUpdateTasks:

                break;
        }
    }
    while (ulChoosedOption);
}


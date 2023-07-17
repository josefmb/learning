#include "TaskController.h"

class AddController : TaskController
{
public:
    AddController();
    ~AddController();

public:
    virtual void showMenu() override;
    virtual void execute() override;
};

#include <iostream>
#include "TaskManager.h"

using namespace std;

int main()
{
    cout << "=== Task Manager ===" << endl;

    ShowTasks();
    EditTask();
    AddTask();

    return 0;
}
#ifndef TASKLIST_H
#define TASKLIST_H

#include <iostream>
#include <vector>
#include "task.h"
using namespace std;
class taskList{
    private:
        vector<Task> Tasks;
    public:
        taskList(vector<Task> Tasks);

        vector<Task> getTaskList() const;
        void addTask();
        void removeTask();
        void changeTaskStatus();

};



#endif // TASKLIST_H
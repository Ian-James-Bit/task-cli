#ifndef TASKLIST_H
#define TASKLIST_H

#include <iostream>
#include <vector>
#include "task.h"
using namespace std;
class taskList{
    private:
        //instace variable
        vector<Task> Tasks;
    public:
        //constructor
        taskList(vector<Task> Tasks);

        //get and set function
        vector<Task> getTaskList() const;
        void setTaskList(vector<Task> Tasks);
        void add(Task task);
        void readLine();
        void addTask();
        void removeTask();
        void changeTaskStatus();

};



#endif // TASKLIST_H
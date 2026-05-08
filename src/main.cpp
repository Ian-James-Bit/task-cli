#include <iostream>
#include "task.h"
#include "taskList.h"
#include <vector>
using namespace std;

int main() {
    Task task1("Pull weeds", false);
    Task task2("Get milk",false);
    cout << task1.getStatus();
    vector<Task> taskVector={task1,task2};
    taskList tasks(taskVector);
    tasks.addTask();
    taskVector=tasks.getTaskList();
    for(int i=0;i<taskVector.size();i++){
        cout<<taskVector.at(i).getDescription();
    }
    tasks.removeTask();
    tasks.changeTaskStatus();
    return 0;
}
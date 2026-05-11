#include <iostream>
#include "task.h"
#include "taskList.h"
#include <vector>
#include <fstream>
using namespace std;

int main() {
    //testing:
    // Task task1("Pull weeds", false);
    // Task task2("Get milk",false);
    // Task task3("Pick up kids",true);
    //vector<Task> taskVector={task1,task2,task3};
    // taskList tasks(taskVector);
    // tasks.addTask();
    // tasks.readLine();
    // tasks.removeTask();
    // tasks.changeTaskStatus();

    //adds previous tasks to list
    vector<Task> taskVector={};
    taskList tasks(taskVector);
    ifstream in;
    in.open("../data/tasks.txt");
    if(in.fail()){
        cout << "File failed to open";
    }

    string task;
    char deliminator=';';
    int index;
    Task temp("0",0);
    while(true){
        getline(in,task);
        if(in.fail()){
            break;
        }
        index=task.find(deliminator);
        temp=Task(task.substr(0,index),stoi(task.substr(index+1)));
        tasks.add(temp);
    }
    tasks.readLine();
    //interface
    // int answer;
    // while(true){
    //     cout<< "Would you like to:\n1.List Tasks\n2.Add a Task\n3.Remove a Task\n4.Change a Task's Status\n";
    //     cin >> answer;
    //     if(answer==1){

    //     }else if(answer==2){

    //     }else if(answer==3){

    //     }else{

    //     }
    // }
    return 0;
}
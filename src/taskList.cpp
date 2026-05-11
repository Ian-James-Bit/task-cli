#include <iostream>
#include "task.h"
#include "taskList.h"
#include <vector>
using namespace std;

taskList :: taskList(vector<Task> Tasks){
    this->Tasks=Tasks;
}

vector<Task> taskList :: getTaskList() const{
    return Tasks;
}
void taskList :: setTaskList(vector<Task> Tasks){
    this->Tasks=Tasks;
}
void taskList :: add(Task task){
    Tasks.push_back(task);
}
void taskList :: readLine(){
    cout << "Tasks: \n";
    for(int i=0;i<Tasks.size();i++){
        cout << i+1 << ": " << Tasks[i].getDescription() << " Completed: "<< boolalpha << Tasks[i].getStatus() << endl;
    }
}
void taskList :: addTask(){
    cout<<"What is your task? "<< endl;
    string description;
    getline(cin,description);
    cout<<endl<<"Is your task incomplete or complete?(0/1)"<<endl; 
    bool status;
    cin >> status;
    Task task(description,status);
    Tasks.push_back(task);
}

void taskList :: removeTask(){
    cout<< "Which task would you like to remove?"<< endl;
    readLine();
    int answer;
    cin >> answer;
    Tasks.erase(Tasks.begin()+answer-1);
}

void taskList :: changeTaskStatus(){
    cout<< "Which task's status would you like to change?"<< endl;
    readLine();
    int answer;
    cin >> answer;
    if(Tasks[answer-1].getStatus()){
        Tasks[answer-1].setStatus(false);
    } else{
        Tasks[answer-1].setStatus(true);
    }
}
#include <iostream>
#include "task.h"
using namespace std;

    //constructor
        Task :: Task(string description,bool status){
            this->description = description;
            this->status=status;
        }
    //set and get methods
        string Task :: getDescription() const {
            return description;
        }
        bool Task :: getStatus() const {
            return status;
        }
        void Task ::  setDescription(string description) {
            this->description = description;
        }
        void Task :: setStatus(bool status) {
            this->status = status;
        }
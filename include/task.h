#ifndef TASK_H
#define TASK_H

#include <string>
using namespace std;
class Task {
    private:
        //instance variables
        string description;
        bool status;

    public:
        //constructor
        Task(string description,bool status);

        //set and get methods
        string getDescription() const;
        bool getStatus() const;
        void setDescription(string description);
        void setStatus(bool status);
};
#endif // TASK_H
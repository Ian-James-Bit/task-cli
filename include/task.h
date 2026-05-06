#ifndef TASK_H
#define TASK_H

#include <string>
using namespace std;
class Task {
private:
    string description;
    bool status;

public:
    Task(string description,bool status);

// Method declarations
    string getDescription() const;
    bool getStatus() const;
    void setDescription(string description);
    void setStatus(bool status);

};
#endif // TASK_H
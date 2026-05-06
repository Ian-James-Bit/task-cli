#include <iostream>
#include "task.h"
using namespace std;

int main() {
    Task task1("Pull weeds", false);
    cout << task1.getStatus();
    return 0;
}
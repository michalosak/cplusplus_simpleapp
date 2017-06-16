#ifndef CPLUSPLUS_SIMPLEAPP_TODO_H
#define CPLUSPLUS_SIMPLEAPP_TODO_H

#include <iostream>

using namespace std;

class Todo {

private:
    string name;
    string date;
    string description;

public:
    Todo(string name, string date, string description);
    void setName(string name);
    void setDate(string date);
    void setDescription(string description);
    string getName();
    string getDate();
    string getDescription();
};


#endif //CPLUSPLUS_SIMPLEAPP_TODO_H

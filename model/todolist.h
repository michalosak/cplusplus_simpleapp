#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "todo.h"

using namespace std;

#ifndef CPLUSPLUS_SIMPLEAPP_TODOLIST_H
#define CPLUSPLUS_SIMPLEAPP_TODOLIST_H


class TodoList {

    vector<Todo> listOfTodos;

public:
    TodoList();
    void addToList(Todo todo);
    void removeFromList();
    Todo* getList();
    void printList();

};


#endif //CPLUSPLUS_SIMPLEAPP_TODOLIST_H

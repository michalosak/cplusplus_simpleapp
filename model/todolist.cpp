//
// Created by Michał Osak on 16/06/2017.
//

#include "todolist.h"


TodoList::TodoList(){};

void TodoList::addToList(Todo todo) {
    TodoList::listOfTodos.push_back(todo);
}

void TodoList::printList() {

    for (Todo item : listOfTodos ){
        cout << item.getName() << endl;
    }
}



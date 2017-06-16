//
// Created by Michał Osak on 16/06/2017.
//

#include "todolist.h"


TodoList::TodoList(){};

void TodoList::addToList(Todo todo) {
    TodoList::listOfTodos.push_back(todo);
}

void TodoList::printList() {

    int i=0;
    for (Todo item : listOfTodos ){
        i++;
        cout << "(" << i << ") \n" << "NAME: " + item.getName() + "\nDATE: " + item.getDate() << endl;
        cout << "DESCRIPTION: " << endl;
        cout << item.getDescription() << "\n\n";
    }
}

void TodoList::removeFromList(int Id) {

    listOfTodos.erase(listOfTodos.begin()+Id);
};



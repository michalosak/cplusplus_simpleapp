//
// Created by Michał Osak on 16/06/2017.
//

#include "todo.h"

Todo::Todo(string name, string date, string description)
: name(name), date(date), description(description) {}

string Todo::getName() {
    return name;
}

string Todo::getDate() {
    return date;
}

string Todo::getDescription() {
    return description;
}

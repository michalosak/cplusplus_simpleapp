#include <python3.5/Python.h>
#include <iostream>
#include "model/todolist.h"

using namespace std;

int main()
{
    string option;

    TodoList todoList;
    do
    {   system("clear");
        cout<<"\n--------------\nMenu\n--------------\n1. Add\n2. Remove from list\n3. Print list\n4. Python example\ne. Exit\n--------------\n";
        cin>>option;
        switch(option.at(0)) {
            case '1': // Add new
                {
                    system("clear");
                    cout << "ADD NEW TODO \n--------------\n";
                    cout << "Type name: ";
                    string name;

                    cin >> name;
                    cout << "Type date: ";
                    string date;
                    cin >> date;

                    cout << "Type description: ";

                    string description;
                    cin >> description;

                    Todo todo(name, date, description);

                    todoList.addToList(todo);
                }
                break;
            case '2':
                system("clear");
                cout << "REMOVE FROM LIST \n--------------\n";
                todoList.printList();

                int Id;
                cout << "Select todo ID: ";
                cin >> Id;

                todoList.removeFromList(Id-1);
                break;

            case '3': //print list
                system("clear");
                cout << "LIST OF TODOS \n--------------\n";
                todoList.printList();
                system("read");
                break;

            case '4': // python example
                Py_Initialize();
                PyRun_SimpleString(
                        "from time import gmtime, strftime\n"
                                "print('Today is',strftime(\"%a, %d %b %Y %H:%M:%S +0000\", gmtime())\n)");
                Py_Finalize();
                break;
        }

    }while(option.at(0)!='e'&&option.at(0)!='E');



    return 0;
}
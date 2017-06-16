#include <iostream>
#include <stdlib.h>
#include "model/todolist.h"

using namespace std;
////Global Array Declaration
//string arr[10];
//void DisplayArray(){
//    for (int i=0;i<10;i++)
//        cout<< "Array [ "<<i<<" ] = "<<arr[i]<<endl;
//}
//void SetDefaultValues(){
//    cout<<"Defalult Values :"<<endl;
//    for(int i=0;i<10;i++)
//    {
//        arr[i]=-1;
//        cout<<"arr ["<<i<<"]"<<"= "<<arr[i]<<endl;
//    }
//}
//void InsertValues(){
//    cout<<"Enter 10 Values "<<endl;
//    for(int i=0;i<10;i++)
//    {
//        cin>>arr[i];
//    }
//    cout<<"\n\t\t\tArray Values Inserted...  Successfully "<<endl;
//}
//void DeleteValues(){
//    cout<<"Enter the Index Number To Delete Value :";
//    int index;
//    cin>>index;
//    if(index>9||index<0)
//    {
//        cout<<"Invalid Index Entered-> Valid Range(0-9)"<<endl;
//        DeleteValues();// Recall The Function it self
//    }
//    else
//    {
//        arr[index]=-1;
//    }
//    cout<<"\n\t\t\tArray Value Deleted...  Successfully "<<endl;
//}
//void UpdateValues(){
//    cout<<"Enter Index Number to Update Value :";
//    int index;
//    cin>>index;
//    if(index>9||index<0)
//    {
//        cout<<"Invalid Index Entered-> Valid Range(0-9)"<<endl;
//        UpdateValues();// Recall The Function it self
//    }
//    else
//    {
//        cout<<"Enter the New Value For Index arr[ "<<index<<" ] = ";
//        cin>>arr[index];
//        cout<<"\n\t\t\tArray Updated...  Successfully "<<endl;
//    }
//}
int main()
{
//    char option;
//    SetDefaultValues();
//
//    do
//    {
//        cout<<"\t\t\tEnter 1 to Enter  Values\n\t\t\tEnter 2 to Update Values\n\t\t\tEnter 3 to Delete Values\n\n\t\t\t or Enter E to EXIT\n\n\t\t\t  Enter Option: ->  ";
//        cin>>option;
//        if(option=='1')
//        {
//            cout<<"Insert Function Called"<<endl;
//            InsertValues();
//            cout<<"Inserted Values :"<<endl;
//            DisplayArray();
//        }
//        else if(option=='2')
//        {
//            UpdateValues();
//            cout<<"Updated Array :"<<endl;
//            DisplayArray();
//        }
//        else if(option=='3')
//        {
//            DeleteValues();
//            cout<<"Array After Deleting Values :"<<endl;
//            DisplayArray();
//        }
//        else if(option!='e'&&option!='E')
//
//            cout<<"\n\n\t\t\tSelect A Valid Option From Below\n\n";
//        }
//    }while(option!='e'&&option!='E');
//    system("cls");// To Clear The Screen
//    cout<<"\n\n\n\n\n\n\n\n\n\n\t\tProgram Ended Press Any Key To Exit Screen.....\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;

    string option;

    do
    {
        cout<<"\t\t\t\n\n\t\t\t or Enter E to EXIT\n\n\t\t\t  Enter Option: ->  ";
        cin>>option;
        switch(option.at(0)) {
            case '1': // Add new
                Todo todo("todo test", "data", "description");
                Todo todo2("todo test2", "data", "description");
                Todo todo3("todo test3", "data", "description");

                TodoList todoList;

                todoList.addToList(todo);
                todoList.addToList(todo2);
                todoList.addToList(todo3);

                todoList.printList();
                break;
            case '2': //remove
                todoList.printList();

                break;


        }

    }while(option.at(0)!='e'&&option.at(0)!='E');



    return 0;
}
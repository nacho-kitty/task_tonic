#include <iostream>
#include <string>
#include <ctime>
#include "todo.h"

Todo::Todo(){
    time_t timestamp;
    time(&timestamp); //got this from https://www.w3schools.com/cpp/cpp_date.asp

    time_t due_date(NULL);
    string title, class_for = "unknown";
    bool completed = 0;
}

Todo::Todo(string title, string class_for, time_t due_date, bool completed){
    time_t timestamp;
    time(&timestamp);
    string title = title;
    string class_for = class_for;
    time_t due_date = due_date;
    bool completed = completed;
}

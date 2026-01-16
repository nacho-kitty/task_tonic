#include <iostream>
#include <string>
#include "todo.h"

Todo::Todo(){
    int month_due, day_due = NULL;
    string title, class_for = "unknown";
    bool completed = 0;
}

Todo::Todo(string title, string class_for, int month_due, int day_due, bool completed){
    string title = title;
    string class_for = class_for;
    int month_due = month_due;
    int day_due = day_due;
    bool completed = completed;
}

string Todo::get_title() const{
    return title; 
}

string Todo::get_class_for() const {
    return class_for;
}

int Todo::get_due_date() const { //i think this is supposed to be a const. idk
    return (month_due + "/" + day_due);
}//need to make a to_string() later for displaying this

bool Todo::get_completed() const {
    return completed:
}

string Todo::change_title() {
    string updated;

    cin >> updated;
    title = updated;

    return title;
}

string Todo::make_complete() {
    completed = true;
    return completed;
}


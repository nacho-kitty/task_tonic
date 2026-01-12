#include <iostream>
#include <string>
using namespace std;

class Todo{

    string title, class_for;
    int due_date;
    bool completed;

    // (stays) private
    int date_assigned;

public:

    //constructors
    Todo();
    Todo(title, class_for, due_date, completed);
    
    //accessors
    string get_title();
    string get_class_for();
    int get_due_date();
    bool get_completed();

    //member functions
    Todo change_title();
    Todo make_complete(); // this is all i can think of right now, lol
}

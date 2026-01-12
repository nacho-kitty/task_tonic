#include "database.h"
#include <iostream>
using namespace std;

int main() {
    if (initDatabase()) {
        cout << "Database setup successful" << endl;
    } 
    else {
        cout << "Database setup failed" << endl;
    }
    return 0;
}


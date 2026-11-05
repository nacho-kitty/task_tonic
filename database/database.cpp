#include "database.h"
#include <iostream>
using namespace std;


bool initDatabase() {
    sqlite3* db;

    if(sqlite3_open("todo.db",&db) != SQLITE_OK) {
        cerr << "Cannot open database" << endl;
        return false;
        }
    const char* sql =
        "CREATE TABLE IF NOT EXISTS tasks ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "title TEXT NOT NULL,"
        "completed INTEGER DEFAULT 0);";

    char* errMsg = nullptr;
    if (sqlite3_exec(db, sql, nullptr, nullptr, &errMsg) != SQLITE_OK) {
        cerr << "SQL error: " << errMsg << endl;
        sqlite3_free(errMsg);
        sqlite3_close(db);
        return false;
    }

    sqlite3_close(db);
    return true;
}

 
        



    



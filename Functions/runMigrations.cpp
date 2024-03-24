#include "migrations_manager.h"

//do migracji
#include "ADD_USER.sql"

void runMigrations(sqlite3* db) {
    
    

    // Wykonaj migracje
    int rc = sqlite3_exec(db, ADD_USER, nullptr, nullptr, nullptr);
    if (rc != SQLITE_OK) {
        std::cerr << "Failed to execute migration 1: " << sqlite3_errmsg(db) << std::endl;
        // Dodaj obsługę błędu migracji
    }

    // Dodaj tutaj obsługę pozostałych migracji
}

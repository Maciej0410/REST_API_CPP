#ifndef MIGRATION_MANAGER_H
#define MIGRATION_MANAGER_H

#include <sqlite3.h>
#include <iostream>

void runMigrations(sqlite3* db);

#endif // MIGRATION_MANAGER_H
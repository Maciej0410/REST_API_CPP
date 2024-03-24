#ifndef CONFIG_H
#define CONFIG_H

#include <sqlite3.h> // Załóżmy, że używamy SQLite

class DatabaseConfig {
private:
    sqlite3* db; // Uchwyt do bazy danych SQLite
public:
    DatabaseConfig(const char* dbPath) {
        // Inicjalizacja połączenia z bazą danych SQLite
        int rc = sqlite3_open(dbPath, &db);
        if (rc != SQLITE_OK) {
            // Obsługa błędu połączenia
            // Na przykład rzucenie wyjątku lub wypisanie komunikatu o błędzie
        }
    }

    ~DatabaseConfig() {
        // Zamknięcie połączenia z bazą danych SQLite
        sqlite3_close(db);
    }

    sqlite3* getConnection() const {
        return db;
    }
};

#endif /* CONFIG_H */
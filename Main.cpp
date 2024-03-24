#include <iostream>
#include "HTTPControllerClass.h" // Importowanie klasy obsługującej kontroler HTTP

int main() {
    // Inicjalizacja serwisu użytkowników
    UserDatabase userDatabase; // Inicjalizacja bazy danych użytkowników
    UserService userService(userDatabase); // Inicjalizacja serwisu użytkowników

    // Inicjalizacja kontrolera HTTP
    HTTPController httpController(userService); // Przekazanie serwisu użytkowników do kontrolera HTTP

    // Uruchomienie serwera HTTP
    std::cout << "Starting HTTP server..." << std::endl;

    // Tutaj umieść kod, który uruchamia serwer HTTP i nasłuchuje na określonym porcie,
    // obsługując przychodzące żądania HTTP za pomocą kontrolera HTTP.

    std::cout << "HTTP server started." << std::endl;

    // Pętla główna programu lub inna logika, która ma być wykonywana przez serwer


    sqlite3* db;
    int rc = sqlite3_open("mydatabase.db", &db);
    if (rc != SQLITE_OK) {
        std::cerr << "Cannot open database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return 1;
    }

    // Wykonaj migracje przy uruchomieniu aplikacji
    runMigrations(db);

    // Tutaj umieść kod aplikacji

    sqlite3_close(db);
    

    // // Utwórz obiekt konfiguracji bazy danych
    // DatabaseConfig config("database.db");

    // // Pobierz uchwyt do bazy danych
    // sqlite3* db = config.getConnection();

    // if (db) {
    //     std::cout << "Połączenie z bazą danych zostało nawiązane." << std::endl;
    // } else {
    //     std::cerr << "Nie udało się nawiązać połączenia z bazą danych." << std::endl;
    // }

    // return 0;
}
#ifndef USER_SERVICE_H
#define USER_SERVICE_H

#include "UserDatabase.h" // Importowanie klasy UserDatabase
#include <vector>

class UserService {
private:
    UserDatabase& database; // Referencja do obiektu UserDatabase
public:
    // Konstruktor przyjmujący referencję do obiektu UserDatabase
    UserService(UserDatabase& database);

    // Metoda dodająca użytkownika do bazy danych
    void addUser(const User& user);

    // Metoda pobierająca listę użytkowników z bazy danych
    std::vector<User> getUsers() const;
};

#endif /* USER_SERVICE_H */
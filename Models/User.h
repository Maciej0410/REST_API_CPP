#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string username;
    std::string email;
public:
    // Konstruktor
    User(const std::string& username, const std::string& email);

    // Metody dostępowe (gettery)
    std::string getUsername() const;
    std::string getEmail() const;
};

#endif /* USER_H */
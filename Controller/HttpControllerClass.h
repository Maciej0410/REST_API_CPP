#ifndef HTTP_CONTROLLER_H
#define HTTP_CONTROLLER_H

#include "UserService.h" // Importowanie klasy UserService

class HTTPController {
private:
    UserService& userService; // Referencja do obiektu UserService
public:
    // Konstruktor przyjmujący referencję do obiektu UserService
    HTTPController(UserService& userService);

    // Metoda obsługująca żądanie GET
    void handleGETRequest();

    // Metoda obsługująca żądanie POST
    void handlePOSTRequest(const User& user);
};

#endif /* HTTP_CONTROLLER_H */
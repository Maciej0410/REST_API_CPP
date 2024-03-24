#include "HTTPControllerClass.h"
#include <iostream>

// Implementacja konstruktora
HTTPController::HTTPController(UserService& userService) : userService(userService) {}

// Metoda obsługująca żądanie GET
void HTTPController::handleGETRequest() {
    std::cout << "Handling GET request..." << std::endl;

    // Pobranie listy użytkowników z serwisu użytkowników
    std::vector<User> users = userService.getUsers();

    // Tutaj można przetworzyć listę użytkowników, np. przekonwertować ją do formatu JSON i wysłać jako odpowiedź
}

// Metoda obsługująca żądanie POST
void HTTPController::handlePOSTRequest(const User& user) {
    std::cout << "Handling POST request..." << std::endl;

    // Dodanie użytkownika do bazy danych za pomocą serwisu użytkowników
    userService.addUser(user);

    // Tutaj można wysłać potwierdzenie dodania użytkownika jako odpowiedź
}
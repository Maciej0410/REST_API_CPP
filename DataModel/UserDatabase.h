#include <vector>
#include "User.h"

class UserDatabase {
private:
    std::vector<User> users;
public:
    void addUser(const User& user) {
        users.push_back(user);
    }

    std::vector<User> getUsers() const {
        return users;
    }
};
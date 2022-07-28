//
// Created by bia on 28/07/2022.
//

#include "User.h"

User::User(const std::string &username, const std::string &passwd, int points) : username(username), passwd(passwd),
                                                                                 points(points) {}

const std::string &User::getUsername() const {
    return username;
}

void User::setUsername(const std::string &username) {
    User::username = username;
}

const std::string &User::getPasswd() const {
    return passwd;
}

void User::setPasswd(const std::string &passwd) {
    User::passwd = passwd;
}

int User::getPoints() const {
    return points;
}

void User::setPoints(int points) {
    User::points = points;
}

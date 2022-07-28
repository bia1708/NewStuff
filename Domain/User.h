//
// Created by bia on 28/07/2022.
//

#ifndef MOVIERECOMMENDATIONAPP_USER_H
#define MOVIERECOMMENDATIONAPP_USER_H
#include <string>

class User {
private:
    std::string username;
    std::string passwd;
    int points;
public:
    explicit User(const std::string &username, const std::string &passwd, int points);

    const std::string &getUsername() const;

    void setUsername(const std::string &username);

    const std::string &getPasswd() const;

    void setPasswd(const std::string &passwd);

    int getPoints() const;

    void setPoints(int points);
};


#endif //MOVIERECOMMENDATIONAPP_USER_H

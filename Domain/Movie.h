//
// Created by bia on 28/07/2022.
//

#ifndef MOVIERECOMMENDATIONAPP_MOVIE_H
#define MOVIERECOMMENDATIONAPP_MOVIE_H

#include <string>

class Movie {
private:
    std::string id;
    std::string name;
    float imdbScore;
    int voters;
    float localScore;
public:
    Movie(const std::string &id, const std::string &name, float imdbScore, int voters, float localScore);

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getName() const;

    void setName(const std::string &name);

    float getImdbScore() const;

    void setImdbScore(float imdbScore);

    int getVoters() const;

    void setVoters(int voters);

    float getLocalScore() const;

    void setLocalScore(float localScore);
};


#endif //MOVIERECOMMENDATIONAPP_MOVIE_H

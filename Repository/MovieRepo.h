//
// Created by bia on 28/07/2022.
//

#ifndef MOVIERECOMMENDATIONAPP_MOVIEREPO_H
#define MOVIERECOMMENDATIONAPP_MOVIEREPO_H

#include "../misc/pyhelper.h"
#include "Repository.h"
#include "../Domain/Movie.h"

class MovieRepo : public Repository<Movie> {
protected:
    void writeToFile();
    void readFromFile();

public:
    MovieRepo() { this->readFromFile(); }
};


#endif //MOVIERECOMMENDATIONAPP_MOVIEREPO_H

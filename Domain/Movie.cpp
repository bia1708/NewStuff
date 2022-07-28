//
// Created by bia on 28/07/2022.
//
#include "Movie.h"

Movie::Movie(const std::string &id, const std::string &name, float imdbScore, int voters, float localScore) : id(id),
                                                                                                              name(name),
                                                                                                              imdbScore(
                                                                                                                      imdbScore),
                                                                                                              voters(voters),
                                                                                                              localScore(
                                                                                                                      localScore) {}

const std::string &Movie::getName() const {
    return name;
}

void Movie::setName(const std::string &name) {
    Movie::name = name;
}

float Movie::getImdbScore() const {
    return imdbScore;
}

void Movie::setImdbScore(float imdbScore) {
    Movie::imdbScore = imdbScore;
}

float Movie::getLocalScore() const {
    return localScore;
}

void Movie::setLocalScore(float localScore) {
    Movie::localScore = localScore;
}

int Movie::getVoters() const {
    return voters;
}

void Movie::setVoters(int voters) {
    Movie::voters = voters;
}

const std::string &Movie::getId() const {
    return id;
}

void Movie::setId(const std::string &id) {
    Movie::id = id;
}

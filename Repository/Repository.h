//
// Created by bia on 28/07/2022.
//

#ifndef MOVIERECOMMENDATIONAPP_REPOSITORY_H
#define MOVIERECOMMENDATIONAPP_REPOSITORY_H

#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <fstream>

class RepoException : public std::exception {
private:
    std::string msg;
public:
    RepoException(const std::string &msg) : msg(msg) {}

    char* what(){
        return const_cast<char *>(msg.c_str());
    }
};

template<typename Obj> class Repository {
protected:
    std::vector<Obj*> list;
//    virtual void readFromFile()=0;
    void writeToFile();

public:
    Repository() {}

    void add(Obj* o) {
        if(std::find(this->list.begin(), this->list.end(), o))
            throw RepoException("Item already in the list!");
        this->list.push_back(o);
        this->writeToFile();
    }

    void remove(Obj* o) {
        if(!std::find(this->list.begin(), this->list.end(), o))
            throw RepoException("Item not found!");
        this->list.erase(o);
        this->writeToFile();
    }

    std::vector<Obj*> getAll() { return this->list; }
    int getSize() { return this->list.size(); }
};


#endif //MOVIERECOMMENDATIONAPP_REPOSITORY_H

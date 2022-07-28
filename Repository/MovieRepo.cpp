//
// Created by bia on 28/07/2022.
//

#include "MovieRepo.h"

void MovieRepo::readFromFile() {

    std::ifstream f("../Files/input.csv");

    char noline[500];
    f.getline(noline, 500); // we don't need the header

    while(!f.eof()){
        std::vector<std::string> args;
        char line[500];
        f.getline(line,500);
        char *p = strtok(line, ",");
        while(p){
            args.push_back((std::string) p);
            p = strtok(nullptr, ",");
        }
        if(args.size() != 5)
            break;
        auto* m = new Movie(args[1], args[2], std::stof(args[3]), std::stoi(args[4]), 0);
        this->list.push_back(m);
    }

    f.close();
//    CPyInstance hInstance;
//
//    CPyObject pName = PyUnicode_FromString("file_extractor");
//    CPyObject pModule = PyImport_Import(pName);
//
//    if(pModule) {
//        CPyObject pFunc = PyObject_GetAttrString(pModule, "getInteger");
//        if(pFunc && PyCallable_Check(pFunc)) {
//            auto* pValue = PyObject_CallObject(pFunc, nullptr);
//            int* result = (int*) pValue;
//
//        } else {
//            printf("ERROR: function getInteger()\n");
//        }
//
//    } else {
//        throw RepoException("ERROR: Python Module not imported! \n");
//    }

}

void MovieRepo::writeToFile() {


//    std::ifstream f();
//
//    if(!f.is_open())
//        throw RepoException("File failed to open!");
//
//    while(!f.eof()){
//        char line[500];
//        std::vector<std::string> args;
//
//        f.getline(line, 500);
//        if(strlen(line) == 0)
//            break;
//
//        char *p = strtok(line, ",");
//        while(p){
//            args.push_back((std::string) p);
//            p = strtok(nullptr, ",");
//        }
//        Obj(args)
//    }

}

//
// Created by bia on 28/07/2022.
//

#ifndef MOVIERECOMMENDATIONAPP_PYHELPER_H
#define MOVIERECOMMENDATIONAPP_PYHELPER_H

#include <Python.h>

class CPyInstance
{
public:
    CPyInstance()
    {
        Py_Initialize();
    }

    ~CPyInstance()
    {
        Py_Finalize();
    }
};


class CPyObject
{
private:
    PyObject *p;
public:
    CPyObject() : p(NULL) {}

    CPyObject(PyObject* _p) : p(_p) {}


    ~CPyObject() {
        Release();
    }

    PyObject* getObject() {
        return p;
    }

    PyObject* setObject(PyObject* _p) {
        return (p=_p);
    }

    PyObject* AddRef() {
        if(p)
        {
            Py_INCREF(p);
        }
        return p;
    }

    void Release() {
        if(p)
        {
            Py_DECREF(p);
        }

        p = nullptr;
    }

    PyObject* operator ->() {
        return p;
    }

    bool is() {
        return p != nullptr;
    }

    operator PyObject*() {
        return p;
    }

    PyObject* operator = (PyObject* pp) {
        p = pp;
        return p;
    }

    operator bool() {
        return p != nullptr;
    }
};


#endif //MOVIERECOMMENDATIONAPP_PYHELPER_H

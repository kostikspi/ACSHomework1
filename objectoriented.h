//
// Created by Константин Воронин on 06.10.2021.
//

#ifndef ACSHOMEWORK1_OBJECTORIENTED_H
#define ACSHOMEWORK1_OBJECTORIENTED_H


#include <cstdio>

struct objectoriented {
    double indexTIOBE;
    char *name;
    int yearOfCreation;
    enum inheritance {
        SINGLE,
        MULTIPLE,
        INTERFACE
    };
    inheritance inheritanceType;
};

void In(objectoriented &ob, FILE *file);

void InRnd(objectoriented &ob);

void Out(objectoriented &s, FILE *file);

// возвращает значение частного
// от деления objectoriented.yearOfCreation / objectoriented.name.size()
double Quotient(objectoriented &s);


#endif //ACSHOMEWORK1_OBJECTORIENTED_H

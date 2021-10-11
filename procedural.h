//
// Created by Константин Воронин on 06.10.2021.
//

#ifndef ACSHOMEWORK1_PROCEDURAL_H
#define ACSHOMEWORK1_PROCEDURAL_H

#include "cstdio"

struct procedural {
    double indexTIOBE;
    char *name;
    int yearOfCreation;
    bool presenceOfADT;
};

void In(procedural &p, FILE *file);

void InRnd(procedural &p);

void Out(procedural &s, FILE *file);

// возвращает значение частного
// от деления procedural.yearOfCreation / procedural.name.size()
double Quotient(procedural &s);


#endif //ACSHOMEWORK1_PROCEDURAL_H

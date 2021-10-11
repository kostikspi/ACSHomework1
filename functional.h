//
// Created by Константин Воронин on 06.10.2021.
//

#ifndef ACSHOMEWORK1_FUNCTIONAL_H
#define ACSHOMEWORK1_FUNCTIONAL_H


#include <cstdio>

struct functional {
    double indexTIOBE;
    char* name;
    int yearOfCreation;
    enum typing {
        PRINCIPAL,
        DYNAMIC
    };
    typing typingScheme;
    bool supportOfLazyComputations;
};

void In(functional &f, FILE *file);

void InRnd(functional &f);

void Out(functional &s, FILE *file);

// возвращает значение частного
// от деления objectoriented.yearOfCreation / objectoriented.name.size()
double Quotient(functional &s);



#endif //ACSHOMEWORK1_FUNCTIONAL_H

//
// Created by Константин Воронин on 06.10.2021.
//

#ifndef ACSHOMEWORK1_PROGRAMMING_LANGUAGE_H
#define ACSHOMEWORK1_PROGRAMMING_LANGUAGE_H


#include <cstdio>
#include "procedural.h"
#include "objectoriented.h"
#include "functional.h"

struct programming_language {
    // значения ключей для каждого языка
    enum key {
        PROCEDURAL,
        OBJECTORIENTED,
        FUNCTIONAL
    };
    key k; // ключ
    // используемые альтернативы
    union { // используем простейшую реализацию
        procedural p;
        objectoriented ob;
        functional f;
    };
};


    programming_language* In(FILE *file);

    programming_language* InRnd();

    void Out(programming_language &s, FILE *file);

    // возвращает значение частного
    // от деления programming_language.yearOfCreation / programming_language.name.size()
    double Quotient(programming_language &s);




#endif //ACSHOMEWORK1_PROGRAMMING_LANGUAGE_H

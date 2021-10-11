//
// Created by Константин Воронин on 06.10.2021.
//

#include <cstdio>
#include <cstdlib>
#include "procedural.h"
#include "filereader.h"
#include "StringRandomizer.h"

void In(procedural &p, FILE *file) {
    p.name = ReadStringFromFile(file);
    p.yearOfCreation = ReadIntegerFromFile(file);
    p.indexTIOBE = ReadIntegerFromFile(file);
    p.presenceOfADT = ReadIntegerFromFile(file);
}

void InRnd(procedural &p) {
    p.name = GetRandomString((1 + (rand() % 15)));
    p.yearOfCreation = 1957 + (rand() % 64);
    p.indexTIOBE = rand() % 100;
    p.presenceOfADT = rand() % 2;
}

void Out(procedural &p, FILE *file) {
    fprintf(file, "Procedural Programming Language: name = %s, yearOfCreation = %d, "
                  "indexTIOBE = %d, presenceOfADT = %d\n", p.name, p.yearOfCreation,
            p.indexTIOBE, p.presenceOfADT);
}

double Quotient(procedural &p) {
    return p.yearOfCreation / static_cast<double>(strlen(p.name));
}



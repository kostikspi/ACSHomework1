//
// Created by Константин Воронин on 08.10.2021.
//

#include "functional.h"
#include <cstdlib>
#include <cstring>
#include "filereader.h"
#include "StringRandomizer.h"

functional::typing ReadTypingScheme(FILE *pFile);

void In(functional &f, FILE *file) {
    f.name = ReadStringFromFile(file);
    f.yearOfCreation = ReadIntegerFromFile(file);
    f.indexTIOBE = ReadIntegerFromFile(file);
    f.typingScheme = ReadTypingScheme(file);
    f.supportOfLazyComputations = ReadBooleanFromFile(file);
}

void InRnd(functional &f) {
    f.name = GetRandomString(1 + (rand() % 15));
    f.yearOfCreation = 1957 + (rand() % 64);
    f.indexTIOBE = rand() % 100;
    int typingSchemeNumber = rand() % 2;
    switch (typingSchemeNumber) {
        case 0:
            f.typingScheme = functional::PRINCIPAL;
            break;
        case 1:
            f.typingScheme = functional::DYNAMIC;
            break;
    }
    f.supportOfLazyComputations = rand() % 2;
}

void Out(functional &f, FILE *file) {

    char* typingScheme;
    switch(f.typingScheme) {
        case 0:
            typingScheme = (char*)"Principle";
            break;
        case 1:
            typingScheme = (char*)"Dynamic";
            break;
    }
    fprintf(file, "Functional Programming Language: name = %s, yearOfCreation = %d,"
                  "indexTIOBE = %f, typingScheme = %s, supportOfLazyComputations = %d\n", f.name, f.yearOfCreation,
            f.indexTIOBE, typingScheme, f.supportOfLazyComputations);
}

double Quotient(functional &f) {
    return f.yearOfCreation / static_cast<double>(strlen(f.name));
}

functional::typing ReadTypingScheme(FILE *pFile) {
    char* inheritanceType = ReadStringFromFile(pFile);
    if(strcmp(inheritanceType, "Principle"))
        return functional::PRINCIPAL;
    if(strcmp(inheritanceType, "Dynamic"))
        return functional::DYNAMIC;
    return functional::PRINCIPAL;
}

//
// Created by Константин Воронин on 06.10.2021.
//

#include <cstdlib>
#include <cstring>
#include "objectoriented.h"
#include "filereader.h"
#include "StringRandomizer.h"

objectoriented::inheritance ReadInheritanceType(FILE *pFile);

void In(objectoriented &ob, FILE *file) {
    ob.name = ReadStringFromFile(file);
    ob.yearOfCreation = ReadIntegerFromFile(file);
    ob.indexTIOBE = ReadIntegerFromFile(file);
    ob.inheritanceType = ReadInheritanceType(file);
}

void InRnd(objectoriented &ob) {
    ob.name = GetRandomString(1 + (rand() % 15));
    ob.yearOfCreation = 1957 + (rand() % 64);
    ob.indexTIOBE = 2 + rand() % 98;
    int inheritanceTypeNumber = rand() % 3;
    switch (inheritanceTypeNumber) {
        case 0:
            ob.inheritanceType = objectoriented::SINGLE;
            break;
        case 1:
            ob.inheritanceType = objectoriented::MULTIPLE;
            break;
        case 2:
            ob.inheritanceType = objectoriented::INTERFACE;
            break;
        default:
            ob.inheritanceType = objectoriented::SINGLE;
            break;
    }
}

void Out(objectoriented &ob, FILE *file) {

    char* inheritanceType;
    switch (ob.inheritanceType) {
        case 0:
            inheritanceType = (char*)"Single";
            break;
        case 1:
            inheritanceType = (char*)"Multiple";
            break;
        case 2:
            inheritanceType = (char*)"Interface";
            break;

    }
    fprintf(file, "Object Oriented Programming Language: name = %s, yearOfCreation = %d,indexTIOBE = %f, inheritanceType = %s\n", ob.name, ob.yearOfCreation, ob.indexTIOBE, inheritanceType);
}

double Quotient(objectoriented &ob) {
    return ob.yearOfCreation / static_cast<double>(strlen(ob.name));
}

objectoriented::inheritance ReadInheritanceType(FILE *pFile) {
    char* inheritanceType = ReadStringFromFile(pFile);
    if(strcmp(inheritanceType, "Single") == 0)
        return objectoriented::SINGLE;
    if(strcmp(inheritanceType, "Multiple") == 0)
        return objectoriented::MULTIPLE;
    if(strcmp(inheritanceType, "Interface") == 0)
        return objectoriented::INTERFACE;
    return objectoriented::MULTIPLE;
}

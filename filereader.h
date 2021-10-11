//
// Created by Константин Воронин on 07.10.2021.
//


#ifndef ACSHOMEWORK1_FILEREADER_H
#define ACSHOMEWORK1_FILEREADER_H

#include <cstring>
#include <cstdio>
#include <cstdlib>


int ReadIntegerFromFile(FILE *file);

bool ReadBooleanFromFile(FILE *file);

char* ReadStringFromFile(FILE *file);



#endif //ACSHOMEWORK1_FILEREADER_H

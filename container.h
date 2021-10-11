//
// Created by Константин Воронин on 06.10.2021.
//

#ifndef ACSHOMEWORK1_CONTAINER_H
#define ACSHOMEWORK1_CONTAINER_H


#include <cstdio>
#include "programming_language.h"

struct container {

    enum {
        max_len = 10000
    };
    int len;
    programming_language *content[max_len];
};

// Инициализация контейнера
void Init(container &c);

// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c);

// Ввод содержимого контейнера из указанного потока
void In(container &c, FILE *file);

// Случайный ввод содержимого контейнера
void InRnd(container &c, int size);

// Вывод содержимого контейнера в указанный поток
void Out(container &c, FILE *file);


void DeleteElementsLowerThenAverage(container &c);

#endif //ACSHOMEWORK1_CONTAINER_H

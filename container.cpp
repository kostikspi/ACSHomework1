//
// Created by Константин Воронин on 06.10.2021.
//

#include "container.h"
#include "programming_language.h"

void Init(container &c) {
    c.len = 0;
}

// Освобождение памяти
void Clear(container &c) {
    for (int i = 0; i < c.len; i++) {
        delete c.content[i];
    }
    c.len = 0;
}

void In(container &c, FILE *file) {
    while (!feof(file)) {
        if ((c.content[c.len] = In(file)) != nullptr) {
            c.len++;
    }
    }
}

void InRnd(container &c, int size) {
    while (c.len < size) {
        if ((c.content[c.len] = InRnd()) != nullptr) {
            c.len++;
        }
    }
}

void Out(container &c, FILE *file) {
    fprintf(file, "Container has %d elements.\n", c.len);
    for (int i = 0; i < c.len; i++) {
        Out(*c.content[i], file);
    }
}

void DeleteElementsLowerThenAverage(container &c) {
    double averageQuotient, sum = 0;
    container newContainer;
    Init(newContainer);
    for(int i = 0; i < c.len; i++) {
        sum += Quotient(*c.content[i]);
    }
    averageQuotient = sum / c.len;
    int index = 0;
    int count = 0;
    for(int i = 0; i < c.len; i++) {
        if(Quotient(*c.content[i]) > averageQuotient) {
            count++;
        }
    }

    InRnd(newContainer, count);
    for(int i = 0; i < c.len; i++) {
        if(Quotient(*c.content[i]) < averageQuotient) {
            continue;
        }
        newContainer.content[index] = c.content[i];
        index++;
    }

    c = newContainer;
}

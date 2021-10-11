//
// Created by Константин Воронин on 06.10.2021.
//
#include <cstdlib>
#include "programming_language.h"


programming_language* In(FILE *file) {
    programming_language *pl;

    int programming_language_type;
    fscanf(file, "%d", &programming_language_type);

    switch (programming_language_type) {
        case 1:
            pl = new programming_language;
            pl->k = programming_language::PROCEDURAL;
            In(pl->p, file);
            return pl;

        case 2:
            pl = new programming_language;
            pl->k = programming_language::OBJECTORIENTED;
            In(pl->ob, file);
            return pl;

        case 3:
            pl = new programming_language;
            pl->k = programming_language::FUNCTIONAL;
            In(pl->f, file);
            return pl;

        default:
            return nullptr;
    }
}

programming_language *InRnd() {
    int k = rand() % 3 + 1;
    programming_language* pl;
    switch(k) {
        case 1:
            pl = new programming_language;
            pl->k = programming_language::PROCEDURAL;
            InRnd(pl->p);
            return pl;
        case 2:;
            pl = new programming_language;
            pl->k = programming_language::OBJECTORIENTED;
            InRnd(pl->ob);
            return pl;
        case 3:
            pl = new programming_language;
            pl->k = programming_language::FUNCTIONAL;
            InRnd(pl->f);
            return pl;
        default:
            return nullptr;
    }
}

void Out(programming_language &pl, FILE *file) {
    switch (pl.k) {
        case programming_language::PROCEDURAL:
            Out(pl.p, file);
            break;
        case programming_language::OBJECTORIENTED:
            Out(pl.ob, file);
            break;
        case programming_language::FUNCTIONAL:
            Out(pl.f, file);
            break;

        default:
            printf("Incorrect programming language!\n");
    }
}

double Quotient(programming_language &pl) {
    switch (pl.k) {
        case programming_language::PROCEDURAL:
            return Quotient(pl.p);
        case programming_language::OBJECTORIENTED:
            return Quotient(pl.ob);
        case programming_language::FUNCTIONAL:
            return Quotient(pl.f);

        default:
            return 0;
    }
}
#include "programming_language.h"

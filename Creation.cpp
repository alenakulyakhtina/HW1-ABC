//------------------------------------------------------------------------------
// Creation.cpp - содержит процедуры связанные с обработкой животного
// и создания произвольной фигуры
//------------------------------------------------------------------------------

#include "Creation.h"

//------------------------------------------------------------------------------
// Ввод параметров животного из файла
Creation* In(ifstream& ifst) {
    Creation* c;
    int k;
    ifst >> k;
    switch (k) {
    case 1:
        c = new Creation;
        c->k = Creation::FISH;
        In(c->f, ifst);
        return c;
    case 2:
        c = new Creation;
        c->k = Creation::BIRD;
        In(c->bd, ifst);
        return c;
    case 3:
        c = new Creation;
        c->k = Creation::BEAST;
        In(c->bt, ifst);
        return c;
    default:
        return 0;
    }
}

// Случайный ввод обобщенной фигуры
Creation* InRnd() {
    Creation* c;
    auto k = rand() % 2 + 1;
    switch (k) {
    case 1:
        c = new Creation;
        c->k = Creation::FISH;
        InRnd(c->f);
        return c;
    case 2:
        c = new Creation;
        c->k = Creation::BIRD;
        InRnd(c->bd);
        return c;
    case 3:
        c = new Creation;
        c->k = Creation::BEAST;
        InRnd(c->bt);
        return c;
    default:
        return 0;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущей фигуры в поток
void Out(Creation& с, ofstream& ofst) {
    switch (с.k) {
    case Creation::FISH:
        Out(с.f, ofst);
        break;
    case Creation::BIRD:
        Out(с.bd, ofst);
        break;
    case Creation::BEAST:
        Out(с.bt, ofst);
        break;
    default:
        ofst << "Incorrect animal!" << endl;
    }
}

//------------------------------------------------------------------------------
// Вычисление периметра фигуры
double Division(Creation& c) {
    switch (c.k) {
    case Creation::FISH:
        return Division(c.f);
        break;
    case Creation::BIRD:
        return Division(c.bd);
        break;
    case Creation::BEAST:
        return Division(c.bt);
        break;
    default:
        return 0.0;
    }
}


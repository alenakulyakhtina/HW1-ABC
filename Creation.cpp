//------------------------------------------------------------------------------
// Creation.cpp - �������� ��������� ��������� � ���������� ���������
// � �������� ������������ ������
//------------------------------------------------------------------------------

#include "Creation.h"

//------------------------------------------------------------------------------
// ���� ���������� ��������� �� �����
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

// ��������� ���� ���������� ������
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
// ����� ���������� ������� ������ � �����
void Out(Creation& �, ofstream& ofst) {
    switch (�.k) {
    case Creation::FISH:
        Out(�.f, ofst);
        break;
    case Creation::BIRD:
        Out(�.bd, ofst);
        break;
    case Creation::BEAST:
        Out(�.bt, ofst);
        break;
    default:
        ofst << "Incorrect animal!" << endl;
    }
}

//------------------------------------------------------------------------------
// ���������� ��������� ������
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


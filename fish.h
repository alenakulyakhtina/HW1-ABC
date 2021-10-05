#ifndef __fish__
#define __fish__

//------------------------------------------------------------------------------
// fish.h - содержит описание треугольника
//------------------------------------------------------------------------------


#include <fstream>
using namespace std;

#include "rnd.h"

// рыба
struct fish {
    string name;// название
    int weight;// вес
};

// Ввод параметров рыбы из файла
void In(fish& f, ifstream& ifst);

// Случайный ввод параметров рыбы
void InRnd(fish& f);

// Вывод параметров рыбы в форматируемый поток
void Out(fish& f, ofstream& ofst);

// Вычисление частного от деления суммы кодов незашифрованной строки на вес
double Division(fish& f);

#endif //__fish__


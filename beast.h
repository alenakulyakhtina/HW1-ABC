#ifndef __beast__
#define __beast__

//------------------------------------------------------------------------------
// beast.h - содержит описание зверя
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rnd.h"

// зверь
struct beast {
    string name; // название
    int weight; // вес
};

// Ввод параметров зверя из файла
void In(beast& bt, ifstream& ifst);

// Случайный ввод параметров зверя
void InRnd(beast& bt);

// Вывод параметров зверя в форматируемый поток
void Out(beast& bt, ofstream& ofst);

// Вычисление частного от деления суммы кодов незашифрованной строки на вес
double Division(beast& bt);

#endif //__beast__



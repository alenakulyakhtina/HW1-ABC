#ifndef __bird__
#define __bird__

//------------------------------------------------------------------------------
// bird.h - содержит описание птицы
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"

// птица
struct bird {
    string name; // название
    int weight; // вес
};

// Ввод параметров птицы из файла
void In(bird& bd, ifstream& ifst);

// Случайный ввод параметров птицы
void InRnd(bird& bird);

// Вывод параметров птицы в форматируемый поток
void Out(bird& bd, ofstream& ofst);

// Вычисление частного от деления суммы кодов незашифрованной строки на вес
double Division(bird& bd);

#endif //__bird__



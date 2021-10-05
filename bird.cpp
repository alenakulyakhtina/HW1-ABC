//------------------------------------------------------------------------------
// bird.cpp - содержит функции обработки птицы
//
#include "bird.h"

// Ввод параметров птицв из потока
void In(bird& bd, ifstream& ifst) {
    ifst >> bd.name >> bd.weight;
}

// Случайный ввод значения веса птицы
void InRnd(bird& bd) {
    bd.weight = Random();
}


//------------------------------------------------------------------------------
// Вывод параметров треугольника в поток
void Out(bird& bd, ofstream& ofst) {
    ofst << "It is Bird: name = "
        << bd.name << ", weight = " << bd.weight
        << ". Division = " << Division(bd) << "\n";
}
//------------------------------------------------------------------------------
// Вычисление частного от деления суммы кодов незашифрованной строки на вес птицы
double Division(bird& bd) {
    string name = bd.name;
    int sum;
    for (int i = 0; i < name.size(); i++) {
        sum += int(name[i]);
    }
    return double(sum / bd.weight);
}
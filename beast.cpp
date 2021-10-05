//------------------------------------------------------------------------------
// triangle.cpp - содержит функции обработки Зверя
//------------------------------------------------------------------------------

// Ввод параметров Зверя
#include "beast.h"
void In(beast& bt, ifstream& ifst) {
    ifst >> bt.name >> bt.weight;
}

// Случайного веса зверя
void InRnd(beast& bt) {
    bt.weight = Random();
}


//------------------------------------------------------------------------------
// Вывод параметров Зверя в поток
void Out(beast& bt, ofstream& ofst) {
    ofst << "It is Beast: name = "
        << bt.name << ", weight = " << bt.weight
        << ". Division = " << Division(bt) << "\n";
}

//------------------------------------------------------------------------------
// Вычисление частного от деления суммы кодов незашифрованной строки на вес зверя
double Division(beast& bt) {
    string name = bt.name;
    int sum;
    for (int i = 0; i < name.size(); i++) {
        sum += int(name[i]);
    }    return double(sum/bt.weight);
}
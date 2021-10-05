#ifndef __Creation__
#define __Creation__

//------------------------------------------------------------------------------
// shape.h - содержит описание животного
//

#include "fish.h"
#include "bird.h"
#include "beast.h"

//------------------------------------------------------------------------------
// структура, обобщающая всех имеющихся животных 
struct Creation {
    // значения ключей для каждой из животных
    enum key { FISH, BIRD, BEAST};
    key k; // ключ
    // используемые альтернативы
    union { // используем простейшую реализацию
        fish f;
        bird bd;
        beast bt;
    };
};

// Ввод животного
Creation* In(ifstream& ifdt);

// Случайный ввод животного
Creation* InRnd();

// Вывод животного
void Out(Creation& c, ofstream& ofst);

// Вычисление частного от деления суммы кодов незашифрованной строки на вес
double Division(Creation& c);

#endif
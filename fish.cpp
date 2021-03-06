//------------------------------------------------------------------------------
// fish.cpp - ???????? ??????? ????????? ????
//------------------------------------------------------------------------------

#include "fish.h"

// ???? ?????????? ???? ?? ??????
void In(fish& f, ifstream& ifst) {
    ifst >> f.name >> f.weight;
}

// ????????? ???? ???????? ???? ????
void InRnd(fish& f) {
    f.weight = Random();

}

//------------------------------------------------------------------------------
// ????? ?????????? ???????????? ? ?????
void Out(fish& f, ofstream& ofst) {
    ofst << "It is Fish: name = "
        << f.name << ", weight = " << f.weight
        << ". Division = " << Division(f) << "\n";
}

//------------------------------------------------------------------------------
// ?????????? ???????? ?? ??????? ????? ????? ??????????????? ?????? ?? ??? ????
double Division(fish& f) {
   string name = f.name;
   int sum;
   for (int i = 0; i < name.size(); i++) {
       sum += int(name[i]);
   }
    return double(sum / f.weight);
}
//------------------------------------------------------------------------------
// triangle.cpp - �������� ������� ��������� �����
//------------------------------------------------------------------------------

// ���� ���������� �����
#include "beast.h"
void In(beast& bt, ifstream& ifst) {
    ifst >> bt.name >> bt.weight;
}

// ���������� ���� �����
void InRnd(beast& bt) {
    bt.weight = Random();
}


//------------------------------------------------------------------------------
// ����� ���������� ����� � �����
void Out(beast& bt, ofstream& ofst) {
    ofst << "It is Beast: name = "
        << bt.name << ", weight = " << bt.weight
        << ". Division = " << Division(bt) << "\n";
}

//------------------------------------------------------------------------------
// ���������� �������� �� ������� ����� ����� ��������������� ������ �� ��� �����
double Division(beast& bt) {
    string name = bt.name;
    int sum;
    for (int i = 0; i < name.size(); i++) {
        sum += int(name[i]);
    }    return double(sum/bt.weight);
}
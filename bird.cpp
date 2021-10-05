//------------------------------------------------------------------------------
// bird.cpp - �������� ������� ��������� �����
//
#include "bird.h"

// ���� ���������� ����� �� ������
void In(bird& bd, ifstream& ifst) {
    ifst >> bd.name >> bd.weight;
}

// ��������� ���� �������� ���� �����
void InRnd(bird& bd) {
    bd.weight = Random();
}


//------------------------------------------------------------------------------
// ����� ���������� ������������ � �����
void Out(bird& bd, ofstream& ofst) {
    ofst << "It is Bird: name = "
        << bd.name << ", weight = " << bd.weight
        << ". Division = " << Division(bd) << "\n";
}
//------------------------------------------------------------------------------
// ���������� �������� �� ������� ����� ����� ��������������� ������ �� ��� �����
double Division(bird& bd) {
    string name = bd.name;
    int sum;
    for (int i = 0; i < name.size(); i++) {
        sum += int(name[i]);
    }
    return double(sum / bd.weight);
}
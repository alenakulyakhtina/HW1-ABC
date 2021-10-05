#ifndef __fish__
#define __fish__

//------------------------------------------------------------------------------
// fish.h - �������� �������� ������������
//------------------------------------------------------------------------------


#include <fstream>
using namespace std;

#include "rnd.h"

// ����
struct fish {
    string name;// ��������
    int weight;// ���
};

// ���� ���������� ���� �� �����
void In(fish& f, ifstream& ifst);

// ��������� ���� ���������� ����
void InRnd(fish& f);

// ����� ���������� ���� � ������������� �����
void Out(fish& f, ofstream& ofst);

// ���������� �������� �� ������� ����� ����� ��������������� ������ �� ���
double Division(fish& f);

#endif //__fish__


#ifndef __beast__
#define __beast__

//------------------------------------------------------------------------------
// beast.h - �������� �������� �����
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rnd.h"

// �����
struct beast {
    string name; // ��������
    int weight; // ���
};

// ���� ���������� ����� �� �����
void In(beast& bt, ifstream& ifst);

// ��������� ���� ���������� �����
void InRnd(beast& bt);

// ����� ���������� ����� � ������������� �����
void Out(beast& bt, ofstream& ofst);

// ���������� �������� �� ������� ����� ����� ��������������� ������ �� ���
double Division(beast& bt);

#endif //__beast__



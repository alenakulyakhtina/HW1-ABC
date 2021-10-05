#ifndef __bird__
#define __bird__

//------------------------------------------------------------------------------
// bird.h - �������� �������� �����
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"

// �����
struct bird {
    string name; // ��������
    int weight; // ���
};

// ���� ���������� ����� �� �����
void In(bird& bd, ifstream& ifst);

// ��������� ���� ���������� �����
void InRnd(bird& bird);

// ����� ���������� ����� � ������������� �����
void Out(bird& bd, ofstream& ofst);

// ���������� �������� �� ������� ����� ����� ��������������� ������ �� ���
double Division(bird& bd);

#endif //__bird__



#ifndef __Creation__
#define __Creation__

//------------------------------------------------------------------------------
// shape.h - �������� �������� ���������
//

#include "fish.h"
#include "bird.h"
#include "beast.h"

//------------------------------------------------------------------------------
// ���������, ���������� ���� ��������� �������� 
struct Creation {
    // �������� ������ ��� ������ �� ��������
    enum key { FISH, BIRD, BEAST};
    key k; // ����
    // ������������ ������������
    union { // ���������� ���������� ����������
        fish f;
        bird bd;
        beast bt;
    };
};

// ���� ���������
Creation* In(ifstream& ifdt);

// ��������� ���� ���������
Creation* InRnd();

// ����� ���������
void Out(Creation& c, ofstream& ofst);

// ���������� �������� �� ������� ����� ����� ��������������� ������ �� ���
double Division(Creation& c);

#endif

#pragma once
#include <vcclr.h>

namespace Project1 {

    ref class QuadraticEquation {
    public:
        // ������ ��� ���������� ������ ���������

        System::String^ Solve();

        QuadraticEquation(double a, double b, double c);


        // ����������� ��� ������������� �������������
    private:
        double a, b, c; // ������������ ����������� ��������� ax^2 + bx + c = 0

        double GetRoot1(); // ������ ���������� ���������(1 ������)
        double GetRoot2(); // ������ ���������� ���������(2 ������)

        double firstType(); // 1-�� ��� ���������
        double secondType(); // 2-�� ��� ���������


        double FourthTypeRoot1(); // 4-�� ��� ���������(1 ������)
        double FourthTypeRoot2(); // 4-�� ��� ��������� (2 ������)

        double FifthTypeRoot1(); // 5-�� ��� ���������(1 ������)
        double FifthTypeRoot2(); // 5-�� ��� ��������� (2 ������)

        double SixthType(); // 6-�� ��� ���������

        double SeventhType(); // 7-�� ��� ���������

        double EighthType(); // 8-�� ��� ���������

    };

} 

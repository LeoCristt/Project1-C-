#include "Equation.h"
#include <cmath> 
#include <sstream>
#include <vcclr.h>

namespace Project1 {

    QuadraticEquation::QuadraticEquation(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    double QuadraticEquation::GetRoot1() {
        double discriminant = b * b - 4 * a * c;
        if (discriminant >= 0) {
            return (-b + std::sqrt(discriminant)) / (2 * a);
        }
        else {
            throw gcnew System::Exception("��������� �� ����� �������������� ������");
        }
    }

    double QuadraticEquation::GetRoot2() {
        double discriminant = b * b - 4 * a * c;
        if (discriminant >= 0) {
            return (-b - std::sqrt(discriminant)) / (2 * a);
        }
        else {
            throw gcnew System::Exception("��������� �� ����� �������������� ������");
        }
    }

    double QuadraticEquation::firstType() {
        return false;
    }

    double QuadraticEquation::secondType() {
        return false;
    }


    double QuadraticEquation::FourthTypeRoot1() {
        return 0;
    }

    double QuadraticEquation::FourthTypeRoot2() {
        return (-b / a);
    }

    double QuadraticEquation::FifthTypeRoot1() {
        return (sqrt(-c / a));
    }
    double QuadraticEquation::FifthTypeRoot2() {
        return (-(sqrt(-c / a)));
    }

    double QuadraticEquation::SixthType() {
        return 0;
    }

    double QuadraticEquation::SeventhType() {
        return -c / b;
    }

    double QuadraticEquation::EighthType() {
        return 0;
    }






    // �����, �������������� ������� � ��������� ��������
    System::String^ QuadraticEquation::Solve() {
        System::String^ ss = gcnew System::String("");

        if (a == 0 && b == 0 && c == 0) {
            ss += L"��������� 1-��� ���� ����� ��� ����� x.\n";
            ss += "-\n";
            ss += "-";
        }
        else if (a == 0 && b == 0 && c != 0) {
            ss += L"��������� 2-��� ���� �� ����� ������\n";
            ss += "-\n";
            ss += "-";
        }
        else if (a != 0 && b != 0 && c != 0) {
            try {
                double root1 = GetRoot1();
                double root2 = GetRoot2();
                ss += L"��������� 3-��� ���� ������.\n";
                ss += root1.ToString() + "\n";
                ss += root2.ToString() + "\n";
            }
            catch (System::Exception^) {
                ss += L"��������� 3-��� ���� �� ����� �������������� ������.\n";
                ss += "-\n";
                ss += "-";
            }
        }

        else if (a != 0 && b != 0 && c == 0) {
            double root1 = FourthTypeRoot1();
            double root2 = FourthTypeRoot2();
            ss += L"��������� 4-��� ���� ������.\n";
            ss += root1.ToString() + "\n";
            ss += root2.ToString() + "\n";

        }

        else if (a != 0 && b == 0 && c != 0) {
            if (-(c / a) >= 0) {
                double root1 = FifthTypeRoot1();
                double root2 = FifthTypeRoot2();
                ss += L"��������� 5-��� ���� ������.\n";
                ss += root1.ToString() + "\n";
                ss += root2.ToString() + "\n";
            }
            else {
                ss += L"��������� 5-��� ���� �� ����� �������������� ������.\n";
                ss += "-\n";
                ss += "-";
            }
        }

        else if (a != 0 && b == 0 && c == 0) {
            double root1 = SixthType();
            ss += L"������������ ������ ��������� 6-��� ���� �������� 0.\n";
            ss += root1.ToString() + "\n";
            ss += "-";

        }

        else if (a == 0 && b != 0 && c != 0) {
            double root1 = SeventhType();
            ss += L"��������� 7-��� ���� ������.\n";
            ss += root1.ToString() + "\n";
            ss += "-";

        }

        else if (a == 0 && b != 0 && c == 0) {
            double root1 = EighthType();
            ss += L"��������� 8-��� ���� ������.\n";
            ss += root1.ToString() + "\n";
            ss += "-";

        }

        return ss;
    }
}





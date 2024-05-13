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
            throw gcnew System::Exception("Уравнение не имеет действительных корней");
        }
    }

    double QuadraticEquation::GetRoot2() {
        double discriminant = b * b - 4 * a * c;
        if (discriminant >= 0) {
            return (-b - std::sqrt(discriminant)) / (2 * a);
        }
        else {
            throw gcnew System::Exception("Уравнение не имеет действительных корней");
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






    // Метод, обрабатывающий условия и выводящий значения
    System::String^ QuadraticEquation::Solve() {
        System::String^ ss = gcnew System::String("");

        if (a == 0 && b == 0 && c == 0) {
            ss += L"Уравнение 1-ого типа верно при любом x.\n";
            ss += "-\n";
            ss += "-";
        }
        else if (a == 0 && b == 0 && c != 0) {
            ss += L"Уравнение 2-ого типа не имеет корней\n";
            ss += "-\n";
            ss += "-";
        }
        else if (a != 0 && b != 0 && c != 0) {
            try {
                double root1 = GetRoot1();
                double root2 = GetRoot2();
                ss += L"Уравнение 3-ого типа решено.\n";
                ss += root1.ToString() + "\n";
                ss += root2.ToString() + "\n";
            }
            catch (System::Exception^) {
                ss += L"Уравнение 3-ого типа не имеет действительных корней.\n";
                ss += "-\n";
                ss += "-";
            }
        }

        else if (a != 0 && b != 0 && c == 0) {
            double root1 = FourthTypeRoot1();
            double root2 = FourthTypeRoot2();
            ss += L"Уравнение 4-ого типа решено.\n";
            ss += root1.ToString() + "\n";
            ss += root2.ToString() + "\n";

        }

        else if (a != 0 && b == 0 && c != 0) {
            if (-(c / a) >= 0) {
                double root1 = FifthTypeRoot1();
                double root2 = FifthTypeRoot2();
                ss += L"Уравнение 5-ого типа решено.\n";
                ss += root1.ToString() + "\n";
                ss += root2.ToString() + "\n";
            }
            else {
                ss += L"Уравнение 5-ого типа не имеет действительных корней.\n";
                ss += "-\n";
                ss += "-";
            }
        }

        else if (a != 0 && b == 0 && c == 0) {
            double root1 = SixthType();
            ss += L"Единственным корнем уравнения 6-ого типа является 0.\n";
            ss += root1.ToString() + "\n";
            ss += "-";

        }

        else if (a == 0 && b != 0 && c != 0) {
            double root1 = SeventhType();
            ss += L"Уравнение 7-ого типа решено.\n";
            ss += root1.ToString() + "\n";
            ss += "-";

        }

        else if (a == 0 && b != 0 && c == 0) {
            double root1 = EighthType();
            ss += L"Уравнение 8-ого типа решено.\n";
            ss += root1.ToString() + "\n";
            ss += "-";

        }

        return ss;
    }
}





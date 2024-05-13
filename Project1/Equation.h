
#pragma once
#include <vcclr.h>

namespace Project1 {

    ref class QuadraticEquation {
    public:
        // Методы для вычисления корней уравнения

        System::String^ Solve();

        QuadraticEquation(double a, double b, double c);


        // Конструктор для инициализации коэффициентов
    private:
        double a, b, c; // Коэффициенты квадратного уравнения ax^2 + bx + c = 0

        double GetRoot1(); // Полное квадратное уравнение(1 корень)
        double GetRoot2(); // Полное квадратное уравнение(2 корень)

        double firstType(); // 1-ой тип уравнения
        double secondType(); // 2-ой тип уравнения


        double FourthTypeRoot1(); // 4-ый тип уравнения(1 корень)
        double FourthTypeRoot2(); // 4-ый тип уравнения (2 корень)

        double FifthTypeRoot1(); // 5-ый тип уравнения(1 корень)
        double FifthTypeRoot2(); // 5-ый тип уравнения (2 корень)

        double SixthType(); // 6-ой тип уравнения

        double SeventhType(); // 7-ой тип уравнения

        double EighthType(); // 8-ой тип уравнения

    };

} 

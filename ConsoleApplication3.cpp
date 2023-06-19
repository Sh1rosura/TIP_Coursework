﻿#include <iostream>
#include <cmath>
using namespace std;

class type1 {
public:
    void Get_answer() {
        cout << "Ответом является любое значение Х" << endl;
    }
    void show() {
        cout << "[1] Уравнение 0 = 0" << endl;
    }
};

class type2 {
private:
    double A;
public:
    type2(double a1) {
        A = a1;
    }
    void Get_answer() {
        cout << "Ответом является Х = 0" << endl;
    }
    void show() {
        cout << "[2] Уравнение " << A << "*X^2 = 0" << endl;
    }
};

class type3 {
private:
    double C;
public:
    type3(double c1) {
        C = c1;
    }
    void Get_answer() {
        cout << "Корней нет" << endl;
    }
    void show() {
        cout << "[3] Уравнение" << C << " = 0" << endl;
    }
};

class type4 {
private:
    double A, C;
public:
    type4(double a1, double c1) {
        A = a1;
        C = c1;
    }
    void Get_answer() {
        double k = ((-1) * C) / A;
        if (k >= 0) {
            double x1 = sqrt(k);
            double x2 = sqrt(k) * (-1);
            cout << "Корни уравнения: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
        else {
            cout << "Корней нет" << endl;
        }
    }
    void show() {
        cout << "[4] Уравнение " << A << "*X^2 + " << C << " = 0" << endl;
    }
    void Get_answer_podbor() {
        if ((((-1) * C) / A) < 0) {
            cout << "Корней методом подбора нет" << endl;
        }
        else {
            double min = abs(0 - A * (-20) * (-20) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A * (i) * (i)-C);
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
            cout << "Приближенно, один из корней уравнения: " << x << endl;
        }
    }
};

class type5 {
private:
    double B, C;
public:
    type5(double b1, double c1) {
        B = b1;
        C = c1;
    }
    void Get_answer() {
        cout << "Корень уравнения: " << (-1) * (C / B) << endl;
    }
    void show() {
        cout << "[5] Уравнение " << B << "*X + " << C << " = 0" << endl;
    }
    void Get_answer_podbor() {
        double min = abs(0 - B * (-20) - C);
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            double temp = abs(0 - B * (i)-C);
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
        cout << "Приближенно, один из корней уравнения: " << x << endl;
    }
};

class type6 {
private:
    double A, B, C;
public:
    type6(double a1, double b1, double c1) {
        A = a1;
        B = b1;
        C = c1;
    }
    void Get_answer() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "Уравнение не имеет действительных корней" << endl;
        }
        else {
            if (D == 0) {
                double x = ((-1) * B - sqrt(D)) / (2 * A);
                cout << "Корень уравнения: " << x << endl;
            }
            else {
                double x1 = ((-1) * B - sqrt(D)) / (2 * A);
                double x2 = ((-1) * B + sqrt(D)) / (2 * A);
                cout << "Корни уравнения: " << endl;
                cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        }
    }
    void show() {
        cout << "[6] Уравнение " << A << "*X^2 + " << B << "*X + " << C << " = 0" << endl;
    }
    void Get_answer_podbor() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "Уравнение не имеет действительных корней" << endl;
        }
        else {
            double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A * (i) * (i)-B * i - C);
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
            cout << "Приближенно, один из корней уравнения: " << x << endl;
        }
    }
};

class type7 {
private:
    double B;
public:
    type7(double b1) {
        B = b1;
    }
    void Get_answer() {
        cout << "Корень уравнения: x = 0" << endl;
    }
    void show() {
        cout << "[7] Уравнение " << B << "*X = 0" << endl;
    }
};

class type8 {
private:
    double A, B;
public:
    type8(double a1, double b1) {
        A = a1;
        B = b1;
    }
    void Get_answer() {
        double x = ((-1) * B) / A;
        cout << "Корни уравнения: " << endl;
        cout << "X1 = 0" << endl << "X2 = " << x << endl;
    }
    void show() {
        cout << "[8] Уравнение " << A << "*X^2 + " << B << "*X = 0 " << endl;
    }
    void Get_answer_podbor() {
        double min = abs(0 - A * (-20) * (-20) - B * (-20));
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            if (i != 0) {
                double temp = abs(0 - A * i * i - B * (i));
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
        }
        cout << "Приближенно, один из корней уравнения: " << x << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C;
    int number;
    cout << "Типы уравнений: " << endl << "[1] 0 = 0" << endl << "[2] AX^2 = 0" << endl << "[3] C = 0" << endl << "[4] AX^2 + C = 0" << endl << "[5] BX + C = 0" << endl << "[6] AX^2 + C = 0" << endl << "[7] BX = 0" << endl << "[8] AX^2 + B = 0" << endl << "Введите номер уравнения:" << endl;
    cin >> number;

    system("cls");

    if (number == 1) {
        cout << "Введите коэффициенты 1-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;
        type1 eq1;
        eq1.show();
        eq1.Get_answer();
    }

    if (number == 2) {
        cout << "Введите коэффициенты 2-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;
        type2 eq2(B);
        eq2.show();
        eq2.Get_answer();
    }

    if (number == 3) {
        cout << "Введите коэффициенты 3-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;
        type3 eq3(C);
        eq3.show();
        eq3.Get_answer();
    }

    if (number == 4) {
        cout << "Введите коэффициенты 4-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;
        type4 eq4(A, C);
        eq4.show();
        eq4.Get_answer();
        eq4.Get_answer_podbor();
    }

    if (number == 5) {
        cout << "Введите коэффициенты 5-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;
        type5 eq5(B, C);
        eq5.show();
        eq5.Get_answer();
        eq5.Get_answer_podbor();
    }

    if (number == 6) {
        cout << "Введите коэффициенты 6-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;
        type6 eq6(A, B, C);
        eq6.show();
        eq6.Get_answer();
        eq6.Get_answer_podbor();
    }

    if (number == 7) {
        cout << "Введите коэффициенты 7-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;
        type7 eq7(B);
        eq7.show();
        eq7.Get_answer();
    }

    if (number == 8) {
        cout << "Введите коэффициенты 8-го уравнения A, B и C через пробел: " << endl;
        cin >> A >> B >> C;
        type8 eq8(A, B);
        eq8.show();
        eq8.Get_answer();
        eq8.Get_answer_podbor();
    }

    return 0;
}

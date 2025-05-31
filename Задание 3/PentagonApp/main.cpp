#include <iostream>
#include <array>
#include "Pentagon.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    array<Point, 5> verts;
    cout << "Пример координат для правильного пятиугольника вписанного в окружность радиуса 1:\n";
    cout << "  1 0\n";
    cout << "  0.309017 0.951057\n";
    cout << "  -0.809017 0.587785\n";
    cout << "  -0.809017 -0.587785\n";
    cout << "  0.309017 -0.951057\n";
    cout << "Введите координаты вершин в формате: x y \n\n";

    for (size_t i = 0; i < verts.size(); ++i) {
        cout << "Вершина " << (i + 1) << " (x y): ";
        double x, y;
        while (!(cin >> x >> y)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Ошибка ввода. Повторите координаты вершины " << (i + 1) << ": ";
        }
        verts[i] = Point(x, y);
    }

    try
    {
        Pentagon p(verts);
        cout << "\n--- Результат ---\n";
        cout << p << endl;
        cout << "Длина стороны: " << p.getSide() << endl;
        cout << "Площадь: " << p.Area() << endl;
        cout << "Периметр: " << p.Perimeter() << endl;
        cout << "Радиус описанной окружности: " << p.CircumscribedRadius() << endl;
    }

    catch (logic_error)
    {
        cerr << "\nОшибка: " << endl;
        cerr << "Введённые точки не образуют правильный пятиугольник. Проверьте координаты, порядок обхода и равенство сторон.\n";
    }
    return 0;
}

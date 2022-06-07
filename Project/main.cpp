#include <iostream>
#include <iostream> //класс для организации ввода-вывода
#include <Windows.h> // класс для определений типов данных, макросов, прототипов функций, констант и т.д.
#include <cmath>// класс для математических вычислени

using namespace std;
void pz2();

int main() {
    SetConsoleCP(1251); // установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251);
    int pz;
    cout << "Введи практическую от 2-5: " << endl;
    cin >> pz;
    switch (pz)
    {
    case 2:
         pz2();
        break;
    case 3:
        cout << "Работа не выполнена" << endl;
        break;
    case 4:
        cout << "Работа не выполнена" << endl;
        break;
    case 5:
        cout << "Работа не выполнена" << endl;
        break;
    default:
        cout << "Такой оценки не существует" << endl;
        break;
    }
}
void pz2() {
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите Растояние отрезка А:" << endl;
    cin >> a;
    cout << "Введите Растояние отрезка B:" << endl;
    cin >> b;
    if (a > b) {
        c = a / b;
        cout << "Количество отрезков В , размещенных на отрезке A:" << c;
    }
    else if (a == b) {
        cout << "Отрезок B, равен отрезку A." << endl;
    }
    else {
        cout << "Отрезок B, больше отрезка A." << endl;
    }
    
}

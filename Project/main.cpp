#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "a:" << endl;
    cin >> a;
    cout << "b:" << endl;
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
    return 0;
}
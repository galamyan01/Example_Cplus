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
        cout << "���������� �������� � , ����������� �� ������� A:" << c;
    }
    else if (a == b) {
        cout << "������� B, ����� ������� A." << endl;
    }
    else { 
        cout << "������� B, ������ ������� A." << endl; 
    }
    return 0;
}
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP (1251);
    double a, b, c;

    cout << "������ ������� ������� a: ";
    cin >> a;
    cout << "������ ������� ������� b: ";
    cin >> b;
    cout << "������ ������� ������� c: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "����� ���������� ���������." << endl;

        if (a == b && b == c) {
            cout << "��������� � ������������." << endl;
        }
        else if (a == b || b == c || a == c) {
            cout << "��������� � ������������." << endl;
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "��������� � �����������." << endl;
        }
        else {
            cout << "��������� � ������������ �� �� � �����������, ������������ ��� ������������." << endl;
        }
    }
    else {
        cout << "������ ���������� �� ����." << endl;
    }

    return 0;
}

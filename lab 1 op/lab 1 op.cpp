#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP (1251);
    double a, b, c;

    cout << "Введіть довжину сторони a: ";
    cin >> a;
    cout << "Введіть довжину сторони b: ";
    cin >> b;
    cout << "Введіть довжину сторони c: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Можна побудувати трикутник." << endl;

        if (a == b && b == c) {
            cout << "Трикутник є рівностороннім." << endl;
        }
        else if (a == b || b == c || a == c) {
            cout << "Трикутник є рівнобедреним." << endl;
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Трикутник є прямокутним." << endl;
        }
        else {
            cout << "Трикутник є різностороннім та не є прямокутним, рівностороннім або рівнобедреним." << endl;
        }
    }
    else {
        cout << "Такого трикутника не існує." << endl;
    }

    return 0;
}

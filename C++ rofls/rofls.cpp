#include <iostream>

using namespace std;


int main() {
    int first, second;
    cout << "Введите ваше 1 число: ";
    cin >> first;

    cout << "Введите ваше 2 число: ";
    cin >> second;

    cout << "Сумма: " << first + second << endl;
    cout << "Разность: " << first - second << endl;
    cout << "Произведение: " << first * second << endl;
    cout << "Частное: " << first / second << endl;
}
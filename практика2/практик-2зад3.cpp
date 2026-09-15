#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    string inputNumber;
    int base;

    cout << "Введите исходное число: ";
    cin >> inputNumber;
    cout << "Введите основание системы счисления (от 1 до 10): ";
    cin >> base;

    if (base < 1 || base > 10) {
        cout << "Ошибка: основание должно быть в диапазоне от 1 до 10." << endl;
        return 1;
    }

    long long decimalNumber = 0;

    if (base == 1) {
        for (char c : inputNumber) {
            if (c != '1') {
                cout << "Ошибка: в унарной системе используются только единицы." << endl;
                return 1;
            }
        }
        decimalNumber = inputNumber.length();
    } else {
        long long temp = stoll(inputNumber);
        long long power = 1;

        while (temp > 0) {
            int digit = temp % 10;
            
            if (digit >= base) {
                cout << "Ошибка: цифра " << digit << " не существует в " << base << "-ичной системе." << endl;
                return 1;
            }
            
            decimalNumber += digit * power;
            power *= base;
            temp /= 10;
        }
    }

    if (decimalNumber == 0) {
        cout << "Результат в двоичной системе: 0" << endl;
        return 0;
    }

    string binaryNumber = "";
    while (decimalNumber > 0) {
        binaryNumber += to_string(decimalNumber % 2);
        decimalNumber /= 2;
    }

    reverse(binaryNumber.begin(), binaryNumber.end());

    cout << "Результат в двоичной системе: " << binaryNumber << endl;

    return 0;
}

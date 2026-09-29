#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    while (x >= 1000) { cout << "M"; x -= 1000; }
    while (x >= 900) { cout << "CM"; x -= 900; }
    while (x >= 500) { cout << "D"; x -= 500; }
    while (x >= 400) { cout << "CD"; x -= 400; }
    while (x >= 100) { cout << "C"; x -= 100; }
    while (x >= 90) { cout << "XC"; x -= 90; }
    while (x >= 50) { cout << "L"; x -= 50; }
    while (x >= 40) { cout << "XL"; x -= 40; }
    while (x >= 10) { cout << "X"; x -= 10; }
    while (x >= 9) { cout << "IX"; x -= 9; }
    while (x >= 5) { cout << "V"; x -= 5; }
    while (x >= 4) { cout << "IV"; x -= 4; }
    while (x >= 1) { cout << "I"; x -= 1; }

    return 0;
}
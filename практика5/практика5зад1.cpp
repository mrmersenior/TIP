#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    int day = 1;
    double amount = X;

    while (amount < Y) {
        amount *= 1.1;
        day++;
    }

    cout << day;
    return 0;
}
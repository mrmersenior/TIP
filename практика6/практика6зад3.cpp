#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    int n;
    cin >> x >> n;

    for (int k = 1; k < n; k++) {
        string next = "";

        for (int i = 0; i < x.size(); ) {
            int j = i;

            while (j < x.size() && x[j] == x[i])
                j++;

            next += to_string(j - i);
            next += x[i];

            i = j;
        }

        x = next;
    }

    cout << x;

    return 0;
}

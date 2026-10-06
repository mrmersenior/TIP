#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int answer = 0;

    while (!a.empty()) {
        vector<int> b;
        bool changed = false;

        for (int i = 0; i < a.size(); i++) {
            if (i + 1 < a.size() && a[i] == a[i + 1]) {
                if (a[i] == k)
                    answer += 2;

                i++;
                changed = true;
            } else {
                b.push_back(a[i]);
            }
        }

        if (!changed)
            break;

        a = b;
    }

    cout << answer;
    return 0;
}
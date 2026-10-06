#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int w;
    cin >> w;

    int a[32][32] = {};

    for (int i = 0; i < w; i++) {
        int x, y;
        cin >> x >> y;
        a[x - 1][y - 1] = -1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == -1) {
                cout << "*";
            } else {
                int count = 0;

                for (int di = -1; di <= 1; di++) {
                    for (int dj = -1; dj <= 1; dj++) {
                        int x = i + di;
                        int y = j + dj;

                        if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == -1)
                            count++;
                    }
                }

                cout << count;
            }

            if (j < m - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

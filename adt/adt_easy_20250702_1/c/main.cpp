#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            cout << a[j][i];
            if (j != h - 1) cout << " ";
        }
        cout << endl;
    }
}

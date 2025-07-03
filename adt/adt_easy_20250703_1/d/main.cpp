#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int ans = n * (n - 1) / 2;
    vector<vector<bool>> b(n, vector<bool>(n, false));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n - 1; j++) {
            int x = a[i][j] - 1;
            int y = a[i][j + 1] - 1;
            if (b[x][y] == false && b[y][x] == false) {
                b[x][y] = true;
                ans--;
            }
        }
    }
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << b[i][j];
    //         if (j != n - 1) cout << " ";
    //     }
    //     cout << endl;
    // }

    cout << ans << endl;
}

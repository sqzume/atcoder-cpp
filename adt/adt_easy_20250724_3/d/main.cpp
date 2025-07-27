#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    rep(i, n) {
        rep(j, n) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1 + i; j < n; j++) {
            if (a[i][j] == 'W' && a[j][i] == 'L') continue;
            if (a[i][j] == 'L' && a[j][i] == 'W') continue;
            if (a[i][j] == 'D' && a[j][i] == 'D') continue;
            cout << "incorrect" << endl;
            return 0;
        }
    }

    cout << "correct" << endl;

    return 0;
}

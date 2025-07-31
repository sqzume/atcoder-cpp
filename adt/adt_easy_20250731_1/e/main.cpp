#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) {
        cin >> s[i];
    }

    int a = 1000, b = 0, c = 1000, d = 0;
    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == '#') {
                a = min(a, i);
                b = max(b, i);
                c = min(c, j);
                d = max(d, j);
            }
        }
    }

    for (int i = a; i <= b; i++) {
        for (int j = c; j <= d; j++) {
            if (s[i][j] == '.') {
                no;
                return 0;
            }
        }
    }

    yes;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    vector<string> s(8);
    rep(i, 8) {
        cin >> s[i];
    }

    rep(i, 8) {
        rep(j, 8) {
            if (s[i][j] == '*') {
                char a = 'a' + j;
                ll b = 8 - i;
                cout << a << b << endl;
                return 0;
            }
        }
    }

    return 0;
}

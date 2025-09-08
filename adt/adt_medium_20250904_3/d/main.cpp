#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    vector<string> s(10);
    rep(i, 10) {
        cin >> s[i];
    }
    ll a = -1, b = 0, c = -1, d = 0;
    rep(i, 10) {
        rep(j, 10) {
            if (s[i][j] == '#') {
                if (a == -1) {
                    a = i;
                }
                if (c == -1) {
                    c = j;
                }
                b = i;
                d = j;
            }
        }
    }
    cout << a + 1 << ' ' << b + 1 << endl;
    cout << c + 1 << ' ' << d + 1 << endl;
    return 0;
}

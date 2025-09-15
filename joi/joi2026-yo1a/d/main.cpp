#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n;
    cin >> n;
    vector<vector<char>> c(n, vector<char>(n));
    rep(i, n) {
        rep(j, n) {
            cin >> c[i][j];
        }
    }


    rep(i, n) {
        bool w = true;
        for (ll j = 1; j < n; j++) {
            if (c[i][j - 1] != c[i][j]) w = false;
        }
        if (w) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    rep(i, n) {
        bool h = true;
        for (ll j = 1; j < n; j++) {
            if (c[j - 1][i] != c[j][i]) h = false;
        }
        if (h) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

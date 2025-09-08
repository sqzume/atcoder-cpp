#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

bool check(vector<vector<char>> c, ll h, ll w) {
    ll cnt = 0;
    if (c[h][w - 1] == '#') {
        cnt++;
    }
    if (c[h][w + 1] == '#') {
        cnt++;
    }
    if (c[h - 1][w] == '#') {
        cnt++;
    }
    if (c[h + 1][w] == '#') {
        cnt++;
    }
    if (cnt == 2 || cnt == 4) {
        return true;
    }
    return false;
}

int main() {
    ll h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    vector<vector<char>> c(h + 2, vector<char>(w + 2, '.'));
    for (ll i = 1; i < h + 1; i++) {
        for (ll j = 1; j < w + 1; j++) {
            c[i][j] = s[i - 1][j - 1];
        }
    }

    for (ll i = 0; i < h + 2; i++) {
        for (ll j = 0; j < w + 2; j++) {
            if (c[i][j] == '#') {
                if (!check(c, i, j)) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}

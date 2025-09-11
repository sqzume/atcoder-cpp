#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    vector<vector<ll>> orb(h, vector<ll>(w + 1, 0)), ingot(h + 1, vector<ll>(w, 0));
    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == 'O') orb[i][w]++;
            if (s[i][j] == 'I') ingot[h][j]++;
            orb[i][j] = orb[i][w];
            ingot[i][j] = ingot[h][j];
        }
    }

    ll ans = 0;
    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == 'J') {
                ans += (orb[i][w] - orb[i][j]) * (ingot[h][j] - ingot[i][j]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}

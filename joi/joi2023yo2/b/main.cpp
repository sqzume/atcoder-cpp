#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n;
    cin >> n;
    vector<vector<ll>> a(4, vector<ll>(n));
    rep(i, 4) {
        rep(j, n) {
            cin >> a[i][j];
        }
    }
    rep(i, 4) sort(a[i].begin(), a[i].end());

    ll ans = LLONG_MAX;
    rep(i, 4) {
        rep(j, n) {
            ll m = 0;
            bool e = false;
            rep(k, 4) {
                if (k == i) continue;
                auto it = lower_bound(a[k].begin(), a[k].end(), a[i][j]);
                if (it == a[k].end()) {
                    e = true;
                    break;
                }
                ll w = a[k][it - a[k].begin()];
                m = max(m, abs(a[i][j] - w));
            }
            if (e) continue;
            ans = min(ans, m);
        }
    }
    cout << ans << endl;
    return 0;
}

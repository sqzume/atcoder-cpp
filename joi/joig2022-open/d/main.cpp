#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll h, w, n;
    cin >> h >> w >> n;
    map<pair<ll, ll>, ll> st;
    rep(i, n) {
        ll y, x;
        cin >> y >> x;
        if (st.find({y, x}) != st.end()) {
            st[{y, x}] = st[{y, x}] + 1;
        } else {
            st[{y, x}] = 1;
        }
    }

    ll dy[] = {0, 0, 0, -1, -1, -1, -2, -2, -2};
    ll dx[] = {0, -1, -2, 0, -1, -2, 0, -1, -2};
    ll ans = 0;
    for (auto s : st) {
        rep(i, 9) {
            ll n = 0;
            ll y = s.first.first + dy[i];
            ll x = s.first.second + dx[i];
            rep(j, 3) {
                rep(k, 3) {
                    if (st.count({y + j, x + k})) {
                        n += st[{y + j, x + k}];
                    }
                }
            }
            ans = max(ans, n);
        }
    }
    cout << ans << endl;
    return 0;
}

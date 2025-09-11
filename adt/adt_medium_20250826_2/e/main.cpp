#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n, w;
    cin >> n >> w;
    vector<pair<ll, ll>> cheese(n);
    rep(i, n) {
        ll a, b;
        cin >> a >> b;
        cheese[i] = {a, b};
    }
    sort(cheese.begin(), cheese.end());
    ll w2 = 0, ans = 0;
    for (ll i = n - 1; 0 <= i; i--) {
        if (w2 + cheese[i].second <= w) {
            ans += cheese[i].first * cheese[i].second;
            w2 += cheese[i].second;
        } else {
            ans += cheese[i].first * (w - w2);
            break;
        }
    }
    cout << ans << endl;
    return 0;
}

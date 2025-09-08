#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll t;
    cin >> t;
    rep(i, t) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans = min({a, c, (a + b + c) / 3});
        cout << ans << endl;
    }
    return 0;
}

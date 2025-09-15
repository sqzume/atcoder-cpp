#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    ll ans = 0;
    rep(i, n) {
        rep(j, m) {
            if (a[i] <= b[j]) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

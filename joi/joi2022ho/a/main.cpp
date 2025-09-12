#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n, 1);
    rep(i, n) cin >> a[i];
    rep(i, n) {
        while (a[i] % 2 == 0) {
            a[i] /= 2;
            b[i] *= 2;
        }
    }
    vector<ll> c(n);
    c[0] = b[0];
    for (ll i = 1; i < n; i++) {
        c[i] = c[i - 1] + b[i];
    }

    ll q;
    cin >> q;
    rep(i, q) {
        ll x;
        cin >> x;
        auto s = lower_bound(c.begin(), c.end(), x);
        cout << a[s - c.begin()] << endl;
    }
    return 0;
}

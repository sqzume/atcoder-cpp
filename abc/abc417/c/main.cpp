#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) {
        cin >> a[i];
    }

    ll ans = 0;
    vector<ll> c(n), d(n);
    rep(i, n) {
        c[i] = a[i] + i;
        d[i] = i - a[i];
    }

    sort(c.begin(), c.end());
    sort(d.begin(), d.end());

    map<ll, ll> d2;
    ll x = 1;
    // rep(i, n) {
    //     if (i != n - 1 && c[i] == c[i + 1]) {
    //         x++;
    //     } else {
    //         c2[c[i]] = x;
    //     }
    // }
    rep(i, n) {
        if (i != n - 1 && d[i] == d[i + 1]) {
            x++;
        } else {
            d2[d[i]] = x;
            x = 1;
        }
    }

    // debug
    // rep(i, n) {
    //     cout << c[i];
    //     if (i != n - 1) cout << " ";
    // }
    // cout << endl;
    // rep(i, n) {
    //     cout << d[i];
    //     if (i != n - 1) cout << " ";
    // }
    // cout << endl;


    rep(i, n) {
        if (d2.count(c[i])) {
            ans += d2[c[i]];
        }
    }

    cout(ans);

    return 0;
}

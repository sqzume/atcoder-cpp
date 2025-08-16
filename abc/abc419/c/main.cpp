#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
ll INF = 2e18;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

// ===== デバッグ用 =====
#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#endif

int main() {
    ll n;
    cin >> n;
    vector<ll> r(n), c(n);
    pair<ll, ll> w(1000000001, 0), h(1000000001, 0);
    rep(i, n) {
        cin >> r[i] >> c[i];
        if (r[i] < h.first) {
            h.first = r[i];
        }
        if (h.second < r[i]) {
            h.second = r[i];
        }
        if (c[i] < w.first) {
            w.first = c[i];
        }
        if (w.second < c[i]) {
            w.second = c[i];
        }
    }
    if (w.second - w.first < h.second - h.first) {
        if ((h.second - h.first) % 2 == 0) {
            cout((h.second - h.first) / 2);
        } else {
            cout((h.second - h.first) / 2 + 1);
        }
    } else {
        if ((w.second - w.first) % 2 == 0) {
            cout((w.second - w.first) / 2);
        } else {
            cout((w.second - w.first) / 2 + 1);
        }
    }

    return 0;
}

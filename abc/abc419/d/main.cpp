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
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    vector<ll> u(n, 1), v(n, 1), w(n + 1, 0);
    rep(i, m) {
        ll l, r;
        cin >> l >> r;
        l--; r--;
        w[l]++; w[r + 1]--;
    }

    ll x = 0;
    vector<char> ans(n);
    rep(i, n) {
        x += w[i];
        if (x % 2 == 1) {
            ans[i] = t[i];
        } else {
            ans[i] = s[i];
        }
    }

    rep(i, n) {
        cout << ans[i];
    }

    return 0;
}

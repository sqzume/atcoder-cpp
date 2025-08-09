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
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    ll m = 0;
    rep(i, n) {
        cin >> a[i];
        m = max(m, a[i]);
    }
    vector<ll> imos(m + 1, 0);
    rep(i, n) {
        imos[0]++;
        imos[a[i]]--;
    }
    vector<ll> l(m), l2(m + 1, 0);
    ll x = imos[0];
    ll y = 0;
    rep(i, m) {
        if (imos[i] < 0) {
            x += imos[i];
        }
        l[i] = x;
        y += x;
        l2[i + 1] = y;
    }

    rep(i, q) {
        ll b;
        cin >> b;
        if (m < b) {
            cout(-1);
            continue;
        }

        b--;
        ll ans = 1;
        ans += l2[b];
        cout(ans);
    }

    return 0;
}

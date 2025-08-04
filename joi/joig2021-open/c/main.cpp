#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
ll INF = 2e18;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

// ===== デバッグ用 =====
#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#endif

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll t = 0, diff = 0;
    rep(i, n) {
        cin >> a[i];
        if (a[i] == 1) {
            diff++;
        }
    }

    ll ans = diff;
    rep(i, n) {
        if (a[i] == 0) {
            t++;
        }
        if (a[i] == 1) {
            diff--;
        }
        ans = min(ans, t + diff);
    }
    cout(ans);

    return 0;
}

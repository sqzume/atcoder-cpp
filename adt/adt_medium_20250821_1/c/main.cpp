#include <algorithm>
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
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n - 1);
    rep(i, n - 1) cin >> a[i];
    sort(a.begin(), a.end());
    ll sum = 0;
    for (ll i = 0; i < n - 1; i++) {
        sum += a[i];
    }
    if (x <= sum - a[n - 2]) {
        cout(0);
    } else if (x <= sum - a[0]) {
        cout(a[n - 2] - ((sum - a[0]) - x));
    } else {
        cout(-1);
    }

    return 0;
}

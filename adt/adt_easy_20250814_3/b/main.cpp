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
    ll n, k, x;
    cin >> n >> k >> x;
    rep(i, n) {
        ll a;
        cin >> a;
        cout << a << ' ';
        if (i == k - 1) {
            cout << x << ' ';
        }
    }

    return 0;
}

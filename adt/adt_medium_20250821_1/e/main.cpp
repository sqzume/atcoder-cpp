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
    vector<ll> q(n);
    rep(i, n) {
        ll p;
        cin >> p;
        q[p - 1] = i + 1;
    }
    rep(i, n) {
        cout << q[i] << " ";
    }

    return 0;
}

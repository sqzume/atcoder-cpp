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
    vector<ll> d(n), e(n);
    rep(i, n) cin >> d[i];

    e[0] = d[0];
    cout << e[0] << " ";
    for (ll i = 1; i < n - 1; i++) {
        e[i] = d[i] + e[i - 1];
        cout << e[i] << " ";
    }
    cout << endl;

    for (ll i = 0; i < n - 1; i++) {
        for (ll j = i + 1; j < n - 1; j++) {
            cout << e[j] - e[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

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
    ll q;
    cin >> q;
    vector<ll> s(100, 0);
    rep(i, q) {
        ll query;
        cin >> query;
        if (query == 1) {
            ll x;
            cin >> x;
            s.push_back(x);
        }
        if (query == 2) {
            cout(s.back());
            s.pop_back();
        }
    }

    return 0;
}

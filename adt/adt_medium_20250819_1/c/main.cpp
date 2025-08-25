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
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    rep(i, 101) {
        vector<ll> included(100, 0);
        rep(i, n) {
            included[a[i] - 1]++;
        }
        bool f = false;
        rep(j, m) {
            if (included[j] == 0) f = true;
        }
        if (f) {
            cout(i);
            break;
        } else {
            a.pop_back();
            n--;
        }
    }

    return 0;
}

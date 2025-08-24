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
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    vector<ll> cnt(n, 0);
    rep(i, m) {
        ll x = 0, y = 0;
        rep(j, n) {
            if (s[j][i] == '0') x++;
            else y++;
        }
        if (x == 0 || y == 0) {
            rep(j, n) cnt[j]++;
            continue;
        } else if (x < y) {
            rep(j, n) {
                if (s[j][i] == '0') cnt[j]++;
            }
        } else {
            rep(j, n) {
                if (s[j][i] == '1') cnt[j]++;
            }
        }
    }
    ll max = 0;
    rep(i, n) {
        if (max < cnt[i]) max = cnt[i];
    }
    rep(i, n) {
        if (cnt[i] == max) cout << i + 1 << ' ';
    }

    return 0;
}

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
    ll s, t;
    cin >> s >> t;

    ll ans = 0;
    rep(a, 101) {
        rep(b, 101) {
            rep(c, 101) {
                if (a + b + c <= s && a * b * c <= t) {
                    ans++;
                }
            }
        }
    }
    cout(ans);

    return 0;
}

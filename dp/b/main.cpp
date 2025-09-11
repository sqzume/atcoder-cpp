#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, x, n) for (ll i = x; i < (n); i++)

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> h(n);
    rep(i, 0, n) cin >> h[i];

    vector<ll> dp(n, 1e18);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    rep(i, 2, n) {
        rep(j, 1, k + 1) {
            if (i - j < 0) break;
            dp[i] = min(dp[i - j] + abs(h[i] - h[i - j]), dp[i]);
        }
    }
    cout << dp[n - 1] << endl;
    return 0;
}

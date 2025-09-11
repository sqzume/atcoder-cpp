#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n;
    cin >> n;

    vector<bool> dp(1e6 + 45, false);
    dp[n] = true;
    for (ll i = n - 1; 0 < i; i--) {
        string s = to_string(i);
        ll t = 0;
        rep(i, s.size()) t += s[i]-'0';
        if (dp[i + t]) dp[i] = true;
    }
    ll ans = 0;
    rep(i, dp.size()) if (dp[i]) ans++;
    cout << ans << endl;
    return 0;
}

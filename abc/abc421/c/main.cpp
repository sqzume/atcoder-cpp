#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n;
    string s;
    cin >> n >> s;
    ll ans = 0, ans2 = 0;
    vector<ll> a;
    for (ll i = 0; i < 2 * n; i++) {
        if (s[i] == 'A') {
            a.push_back(i);
        }
    }
    for (ll i = 0; i < n; i++) {
        ans += abs(a[i] - (i * 2));
        ans2 += abs(a[i] - (i * 2 + 1));
    }
    cout << min(ans, ans2) << endl;
    return 0;
}

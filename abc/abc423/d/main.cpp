#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n), c(n);
    rep(i, n) cin >> a[i] >> b[i] >> c[i];

    map<ll, ll> s;
    ll p = 0, t = 0;
    rep(i, n) {
        if (p + c[i] <= k) {
            if (t <= a[i]) {
                t = a[i];
            }
        } else {
            vector<ll> y;
            for (auto x : s) {
                t = x.first;
                p -= x.second;
                y.push_back(x.first);
                if (p + c[i] <= k) {
                    break;
                }
            }
            rep(j, y.size()) s.erase(y[j]);
        }
        cout << t << endl;
        p += c[i];
        if (s.find(t + b[i]) != s.end()) {
            s[t + b[i]] = s[t + b[i]] + c[i];
        } else {
            s[t + b[i]] = c[i];
        }
    }
    return 0;
}

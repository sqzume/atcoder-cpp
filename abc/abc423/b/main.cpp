#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n;
    cin >> n;
    vector<ll> l(n);
    rep(i, n) cin >> l[i];

    bool ok = false;
    ll a = 0, b = 0;
    rep(i, n) {
        if (!ok && l[i] == 1) {
            a = i;
            ok = true;
        }
        if (l[i] == 1) b = i;
    }
    cout << b - a << endl;
    return 0;
}

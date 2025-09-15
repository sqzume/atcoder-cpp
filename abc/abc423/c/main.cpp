#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n, r;
    cin >> n >> r;
    vector<ll> l(n);
    rep(i, n) cin >> l[i];

    bool left = false, right = false;
    ll c = 0;
    for (ll i = 0; i < r; i++) {
        if (l[i] == 0) {
            c++;
            if (!left) left = true;
        }
        if (left && l[i] == 1) c += 2;
    }
    for (ll i = n - 1; r <= i; i--) {
        if (l[i] == 0) {
            c++;
            if (!right) right = true;
        }
        if (right && l[i] == 1) c += 2;
    }
    cout << c << endl;
    return 0;
}

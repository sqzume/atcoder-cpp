#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    vector<ll> num(n, 1);
    rep(i, n) {
        while (a[i] % 2 == 0) {
            a[i] /= 2;
            num[i] *= 2;
        }
    }

    vector<ll> sum(n);
    sum[0] = num[0];
    for (ll i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + num[i];
    }

    ll q;
    cin >> q;
    rep(i, q) {
        ll x;
        cin >> x;
        auto it = lower_bound(sum.begin(), sum.end(), x);
        cout << a[it - sum.begin()] << endl;
    }
    return 0;
}

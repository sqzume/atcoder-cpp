#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n;
    cin >> n;
    set<ll> a;
    rep(i, n) {
        ll x;
        cin >> x;
        a.insert(x);
    }

    for (const auto x : a) {
        if (a.find(x + 3) != a.end() && a.find(x + 6) != a.end()) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

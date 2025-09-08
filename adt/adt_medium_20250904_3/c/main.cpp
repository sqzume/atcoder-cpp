#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n;
    cin >> n;
    vector<vector<bool>> x(101, vector<bool>(101, false));
    rep(i, n) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        for (ll j = a; j < b; j++) {
            for (ll k = c; k < d; k++) {
                x[k][j] = true;
            }
        }
    }
    ll s = 0;
    rep(i, 100) {
        rep(j, 100) {
            if (x[i][j]) s++;
        }
    }
    cout << s << endl;
    return 0;
}

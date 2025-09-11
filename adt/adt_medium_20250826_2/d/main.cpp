#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll h, w;
    cin >> h >> w;
    for (ll i = 0; i < h; i++) {
        for (ll j = 0; j < w; j++) {
            ll a;
            cin >> a;
            char b;
            if (a == 0) {
                b = '.';
            } else {
                b = (a - 1)+'A';
            }
            cout << b;
        }
        cout << endl;
    }
    return 0;
}

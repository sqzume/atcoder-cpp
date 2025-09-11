#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n;
    cin >> n;
    for (ll a = 0; a < 22; a++) {
        for (ll b = 0; b < 22; b++) {
            for (ll c = 0; c < 22; c++) {
                if (a + b + c <= n) {
                    cout << a << ' ' << b << ' ' << c << endl;
                }
            }
        }
    }
    return 0;
}

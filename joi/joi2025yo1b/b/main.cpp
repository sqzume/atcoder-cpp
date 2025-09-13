#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll p, q, a, b;
    cin >> p >> q >> a >> b;
    if (q <= p) {
        cout << a * q << endl;
    } else {
        cout << a * p + (q - p) * b << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll a, b;
    cin >> a >> b;
    if (3 * b < a) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll a, b;
    cin >> a >> b;
    if (a < b) {
        cout << -1 << endl;
    } else if (a == b) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
    return 0;
}

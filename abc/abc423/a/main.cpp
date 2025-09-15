#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll x, c;
    cin >> x >> c;
    cout << x / (1000 + c) * 1000 << endl;
    return 0;
}

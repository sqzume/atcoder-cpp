#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n, x;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    string y;
    cin >> x >> y;
    if (s[x - 1] == y) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n, m;
    string s;
    cin >> n >> m >> s;
    vector<ll> c(n);
    vector<vector<char>> c2(m, vector<char>());
    rep(i, n) {
        cin >> c[i];
        c2[c[i] - 1].push_back(s[i]);
    }
    return 0;
}

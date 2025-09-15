#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n;
    string s;
    cin >> n >> s;

    ll ans = 0;
    rep(i, s.size()) {
        if (s[i] == 'j') ans += 2;
        if (s[i] == 'o') ans += 1;
        if (s[i] == 'i') ans += 2;
    }
    cout << ans << endl;
    return 0;
}

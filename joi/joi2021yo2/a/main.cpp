#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n, a;
    string s;
    cin >> n >> a >> s;
    queue<ll> r, l;
    for (ll i = a - 1; i < n; i++) {
        if (s[i] == '#') r.push(i);
    }
    for (ll i = a - 1; 0 <= i; i--) {
        if (s[i] == '#') l.push(i);
    }
    ll now = a - 1, rotate = 1;
    ll ans = 0;
    while (r.size() + l.size()) {
        if (rotate == 1) {
            if (r.size() == 0) {
                ans += 2 * (n - now);
            } else {
                ans += (r.front() - now);
                now = r.front();
                r.pop();
            }
        }
        if (rotate == -1) {
            if (l.size() == 0) {
                ans += 2 * (now + 1);
            } else {
                ans += (now - l.front());
                now = l.front();
                l.pop();
            }
        }
        rotate *= -1;
    }
    cout << ans << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

bool isPalindrome(ll x, int a) {
    string s;
    while (x) {
        s += '0' + x % a;
        x /= a;
    }
    string rs = s;
    reverse(rs.begin(), rs.end());
    return s == rs;
}

int main() {
    int a;
    ll n;
    cin >> a >> n;

    ll ans = 0;
    auto check = [&](string s) {
        ll y = stoll(s);
        if (y <= n && isPalindrome(y, a)) ans += y;
    };
    for (ll x = 0; x < 1e6; x++) {
        string s = to_string(x);
        string rs = s;
        reverse(rs.begin(), rs.end());
        s += rs;

        check(s);
        s.erase(s.begin() + (s.size() / 2));
        check(s);
    }
    cout(ans);

    return 0;
}

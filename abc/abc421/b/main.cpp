#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    vector<ll> s(10);
    cin >> s[0] >> s[1];
    for (ll i = 2; i < 10; i++) {
        s[i] = s[i - 1] + s[i - 2];
        string a;
        a = to_string(s[i]);
        reverse(a.begin(), a.end());
        s[i] = stoll(a);
    }
    cout << s[9] << endl;
    return 0;
}

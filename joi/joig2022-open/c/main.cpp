#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    // 入力
    ll n;
    cin >> n;

    vector<ll> ag(n + 1, 0);
    for (ll i = 1; i <= n; i++) {
        ll x, y;
        cin >> x >> y;
        if (y <= ag[i - 1] - ag[i - 1 - x]) {
            ag[i] = ag[i - 1] + 1;
        } else {
            ag[i] = ag[i - 1];
        }
    }
    cout << ag[n] << endl;
    return 0;
}

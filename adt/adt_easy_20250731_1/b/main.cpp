#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    ll n, d;
    cin >> n >> d;
    vector<ll> t(n);
    rep(i, n) {
        cin >> t[i];
    }
    rep(i, n - 1) {
        if (t[i + 1] - t[i] <= d) {
            cout(t[i + 1]);
            return 0;
        }
    }

    cout(-1);

    return 0;
}

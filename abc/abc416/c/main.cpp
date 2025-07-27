#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    ll n, k, x;
    cin >> n >> k >> x;
    vector<string> s(n);
    rep(i, n) {
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    vector<string> ans;
    ll now = pow(n, k), home = 0;
    for (int j = 1; j <= k; j++) {
        ll p = now / n;
        for (int i = 1; i <= n; i++) {
            if (x <= home + (p * i)) {
                ans.push_back(s[i - 1]);
                now /= n;
                home += p * (i - 1);
                break;
            }
        }
    }

    rep(i, ans.size()) {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}

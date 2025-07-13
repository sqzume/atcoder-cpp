#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> t(n), l(n);
    rep(i, n) cin >> t[i] >> l[i];

    for (int k = 1; k <= d; k++) {
        int ans = 0;
        rep(i, n) {
            if (ans < t[i] * (l[i] + k)) {
                ans = t[i] * (l[i] + k);
            }
        }
        cout(ans);
    }

    return 0;
}

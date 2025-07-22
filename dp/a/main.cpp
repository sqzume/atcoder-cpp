#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) {
        cin >> h[i];
    }

    vector<int> dp(n);
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        if (i == 1) {
            dp[i] = dp[i - 1] + abs(h[i] - h[i - 1]);
            continue;
        }
        dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    cout(dp[n - 1]);

    return 0;
}

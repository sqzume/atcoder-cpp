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
    vector<int> p(n);
    rep(i, n) cin >> p[i];

    vector<int> ranking(n, 0);
    for (int r = 1; r <= n; r++) {
        int max_ = 0;
        int k = 0;
        rep(i, n) {
            if (ranking[i] == 0) {
                max_ = max(max_, p[i]);
            }
        }
        rep(i, n) {
            if (p[i] == max_) {
                ranking[i] = r;
                k++;
            }
        }
        if (k > 1) r += k - 1;
    }
    rep(i, n) cout(ranking[i]);

    return 0;
}

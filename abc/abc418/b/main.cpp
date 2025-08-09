#include <bits/stdc++.h>
#include <iomanip>
#include <ios>
using namespace std;

// ===== エイリアス =====
using ll = long long;
ll INF = 2e18;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

// ===== デバッグ用 =====
#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#endif

int main() {
    string s;
    cin >> s;

    ll n = s.size();
    double p = 0;
    for (ll i = 0; i < n - 1; i++) {
        for (ll j = i + 1; j < n; j++) {
            if (s[i] != 't' || s[j] != 't') {
                continue;
            }
            if (j - i + 1 < 3) {
                continue;
            }

            double x = 0;
            for (ll k = i; k <= j; k++) {
                if (s[k] == 't') x++;
                p = max(p, (x - 2) / (j - i + 1 - 2));
            }
        }
    }
    cout << fixed << setprecision(17) << p << endl;

    return 0;
}

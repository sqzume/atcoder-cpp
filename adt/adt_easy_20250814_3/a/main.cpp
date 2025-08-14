#include <bits/stdc++.h>
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
    ll n;
    cin >> n;
    string s;
    cin >> s;

    if (n % 2 == 0) {
        no;
        return 0;
    }
    rep(i, n) {
        if (i < (n - 1) / 2) {
            if (s[i] != '1') {
                no;
                return 0;
            }
        }
        if (i == (n - 1) / 2) {
            if (s[i] != '/') {
                no;
                return 0;
            }
        }
        if ((n - 1) / 2 < i) {
            if (s[i] != '2') {
                no;
                return 0;
            }
        }
    }
    yes;

    return 0;
}

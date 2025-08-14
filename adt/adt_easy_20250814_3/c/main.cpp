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

    rep(i, n) {
        if (i == n - 1) {
            cout << s[i];
            continue;
        }
        if (s[i] == 'n' && s[i + 1] == 'a') {
            cout << "nya";
            i++;
            continue;
        } else {
            cout << s[i];
            continue;
        }
    }

    return 0;
}

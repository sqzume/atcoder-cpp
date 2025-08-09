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
    string s;
    cin >> n >> s;

    if (n <= 2) {
        no;
        return 0;
    }

    if (s[n - 3] == 't' && s[n - 2] == 'e' && s[n - 1] == 'a') {
        yes;
        return 0;
    }
    no;

    return 0;
}

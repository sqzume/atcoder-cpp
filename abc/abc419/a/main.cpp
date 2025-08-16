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
    string s;
    cin >> s;
    if (s == "red") {
        cout("SSS");
    } else if (s == "blue") {
        cout("FFF");
    } else if (s == "green") {
        cout("MMM");
    } else {
        cout("Unknown");
    }

    return 0;
}

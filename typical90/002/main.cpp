#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
ll INF = 2e18;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

// ===== デバッグ用 =====
#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#endif

int main() {
    ll n;
    cin >> n;

    if (n % 2 == 1) {
        return 0;
    }

    bitset<20> bit;
    vector<char> pare(n, '(');

    for (int i = 0; i < (1 << n); i++) {
    }

    return 0;
}

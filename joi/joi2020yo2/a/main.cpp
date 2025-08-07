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

vector<vector<char>> turn_right(vector<vector<char>> s, ll n) {
    vector<vector<char>> u(n, vector<char>(n));
    rep(i, n) {
        rep(j, n) {
            u[i][j] = s[n - 1 - j][i];
        }
    }
    return u;
}

ll check(vector<vector<char>> s,vector<vector<char>> t, ll n) {
    ll x = 0;
    rep(i, n) {
        rep(j, n) {
            if (s[i][j] != t[i][j]) x++;
        }
    }
    return x;
}

int main() {
    ll n;
    cin >> n;
    vector<vector<char>> s(n, vector<char>(n)), t(n, vector<char>(n));
    rep(i, n) {
        rep(j, n) {
            cin >> s[i][j];
        }
    }
    rep(i, n) {
        rep(j, n) {
            cin >> t[i][j];
        }
    }

    ll x = INF, y = 0;
    chmin(x, check(s, t, n) + y);
    y = 1; s = turn_right(s, n);
    chmin(x, check(s, t, n) + y);
    y = 2; s = turn_right(s, n);
    chmin(x, check(s, t, n) + y);
    y = 1; s = turn_right(s, n);
    chmin(x, check(s, t, n) + y);

    cout(x);

    return 0;
}

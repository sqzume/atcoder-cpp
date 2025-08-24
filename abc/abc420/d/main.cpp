#include <bits/stdc++.h>
#include <utility>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    rep(i, h) rep(j, w) cin >> a[i][j];

    vector<vector<char>> b = a;
    pair<ll, ll> start, gorl;
    rep(i, h) {
        rep(j, w) {
            if (a[i][j] == 'x') b[i][j] = 'o';
            if (a[i][j] == 'o') b[i][j] = 'x';
            if (a[i][j] == 'S') start = make_pair(i, j);
            if (a[i][j] == 'G') gorl = make_pair(i, j);
        }
    }

    queue<pair<ll, ll>> bfs;
    bfs.push(start);
    while (!bfs.size()) {
        // WIP bfs
    }
    return 0;
}

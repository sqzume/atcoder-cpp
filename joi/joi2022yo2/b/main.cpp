#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    // 入力
    ll h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    // BFS
    vector<vector<ll>> dist(h, vector<ll>(w, -1));
    dist[0][0] = 0;
    queue<pair<ll, ll>> que;
    que.push({0, 0});
    const ll dx[] = {-1, 1, 0, 0};
    const ll dy[] = {0, 0, -1, 1};

    while (!que.empty()) {
        ll x = que.front().second;
        ll y = que.front().first;
        que.pop();
        if (x == w - 1 && y == h - 1) {
            cout << dist[h - 1][w - 1] << endl;
            return 0;
        }
        rep(i, 4) {
            ll nx = x + dx[i];
            ll ny = y + dy[i];
            if (nx < 0 || w <= nx || ny < 0 || h <= ny) continue;
            if (dist[ny][nx] == -1 && s[ny][nx] != s[y][x]) {
                que.push({ny, nx});
                dist[ny][nx] = dist[y][x] + 1;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}

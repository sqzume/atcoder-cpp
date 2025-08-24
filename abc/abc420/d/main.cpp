#include <bits/stdc++.h>
#include <tuple>
#include <utility>
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
    ll h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    rep(i, h) {
        rep(j, w) {
            cin >> a[i][j];
        }
    }

    vector<vector<char>> maze(h + 2, vector<char>(w + 2));
    for (ll i = 0; i < w + 2; i++) maze[0][i] = '#';
    for (ll i = 1; i <= h; i++) {
        maze[i][0] = '#';
        for (ll j = 1; j <= w; j++) {
            maze[i][j] = a[i - 1][j - 1];
        }
        maze[i][w + 1] = '#';
    }
    for (ll i = 0; i < w + 2; i++) maze[h + 1][i] = '#';
    h += 2; w += 2;

    pair<ll, ll> start, goal;
    rep(i, h) {
        rep(j, w) {
            if (maze[i][j] == 'S') start = make_pair(i, j);
            if (maze[i][j] == 'G') goal = make_pair(i, j);
        }
    }

    queue<tuple<ll, ll, ll, ll>> que, que2;
    que.push(make_tuple(start.first, start.second, 0, 0));

    while (que.size() != 0) {
        auto [x, y, check, cnt] = que.front();
        vector<vector<ll>> dist(h, vector<ll>(w, -1));
        dist[x][y] = 1;
        que2.push(make_tuple(x, y, check, cnt));
        while (que2.size() != 0) {
            auto[x2, y2, check2, cnt2] = que2.front();
            if (maze[x2][y2] == 'G') {
                cout(cnt2);
                return 0;
            }
            char wall;
            if (check2 % 2 == 0) {
                wall = 'x';
            } else {
                wall = 'o';
            }
            if (maze[x2 - 1][y2] == '?') {
                que.push(make_tuple(x2 - 1, y2, check2 + 1, cnt2 + 1));
            } else if (maze[x2 - 1][y2] != '#' && maze[x2 - 1][y2] != wall && dist[x2 - 1][y2] == -1) {
                dist[x2 - 1][y2] = 1;
                que2.push(make_tuple(x2 - 1, y2, check2, cnt2 + 1));
            }
            if (maze[x2 + 1][y2] == '?') {
                que.push(make_tuple(x2 + 1, y2, check2 + 1, cnt2 + 1));
            } else if (maze[x2 + 1][y2] != '#' && maze[x2 + 1][y2] != wall && dist[x2 + 1][y2] == -1) {
                dist[x2 + 1][y2] = 1;
                que2.push(make_tuple(x2 + 1, y2, check2, cnt2 + 1));
            }
            if (maze[x2][y2 - 1] == '?') {
                que.push(make_tuple(x2, y2 - 1, check2 + 1, cnt2 + 1));
            } else if (maze[x2][y2 - 1] != '#' && maze[x2][y2 - 1] != wall && dist[x2][y2 - 1] == -1) {
                dist[x2][y2 - 1] = 1;
                que2.push(make_tuple(x2, y2 - 1, check2, cnt2 + 1));
            }
            if (maze[x2][y2 + 1] == '?') {
                que.push(make_tuple(x2, y2 + 1, check2 + 1, cnt2 + 1));
            } else if (maze[x2][y2 + 1] != '#' && maze[x2][y2 + 1] != wall && dist[x2][y2 + 1] == -1) {
                dist[x2][y2 + 1] = 1;
                que2.push(make_tuple(x2, y2 + 1, check2, cnt2 + 1));
            }
            que2.pop();
        }
       que.pop();
    }
    cout(-1);

    return 0;
}

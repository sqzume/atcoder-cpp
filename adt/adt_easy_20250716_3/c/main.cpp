#include <bits/stdc++.h>
#include <string>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<string>> b(r, vector<string>(c));
    vector<pair<int, int>> bom_grid;
    vector<string> bom_strength;
    rep(i, r) {
        rep(j, c) {
            cin >> b[i][j];
            if (b[i][j] != "." && b[i][j] != "#") {
                bom_grid.push_back({i, j});
                bom_strength.push_back(b[i][j]);
            }
        }
    }

    rep(i, bom_grid.size()) {
        cout(bom_strength[i]);
    }

    rep(i, bom_grid.size()) {
        int x = bom_grid[i].first;
        int y = bom_grid[i].second;
        int str = stoi(bom_strength[i]);
        rep(j, r) {
            rep(k, c) {
                if (abs(x - j) + abs(y - k) <= str) {
                    b[j][k] = ".";
                }
            }
        }
    }

    rep(i, r) {
        rep(j, c) {
            cout << b[i][j];
        }
        cout << '\n';
    }

    return 0;
}

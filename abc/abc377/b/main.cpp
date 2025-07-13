#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    vector<string> s(8);
    rep(i, 8) cin >> s[i];

    vector<vector<bool>> grid(8, vector<bool>(8, false));
    rep(i, 8) {
        rep(j, 8) {
            if (s[i][j] == '#') {
                rep(k, 8) {
                    grid[k][j] = true;
                }
                rep(k, 8) {
                    grid[i][k] = true;
                }
            }
        }
    }

    int ans = 0;
    rep(i, 8) {
        rep(j, 8) {
            if (!grid[i][j]) {
                ans++;
            }
        }
    }

    cout(ans);

    return 0;
}

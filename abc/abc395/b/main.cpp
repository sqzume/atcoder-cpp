#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define CIN(type, var) type var; cin >> var
#define CIN2(type, var1, var2) type var1, var2; cin >> var1 >> var2
#define CIN3(type, var1, var2, var3) type var1, var2, var3; cin >> var1 >> var2 >> var3
#define VECCIN(x) for (auto&youso_ : (x) ) cin >> youso_
#define COUT(x) cout << (x) << '\n'
#define SCOUT(x) cout << (x) << " "
#define NCOUT(x) cout << (x)
#define Yes cout << "Yes" << '\n'
#define No cout << "No" << '\n'

// ===== main() =====
int main() {
    CIN(int, n);
    vector<vector<char>> grid(n, vector<char>(n));
    rep(i, n) {
        int j = n - i;
        if (i <= j) {
            for (int k = i; k < j; k++) {
                for (int l = i; l < j; l++) {
                    if (i % 2 == 0) {
                        grid[k][l] = '#';
                    } else {
                        grid[k][l] = '.';
                    }
                }
            }
        }
    }

    rep(i, n) {
        rep(j, n) {
            cout << grid[i][j];
        }
        cout << '\n';
    }

    return 0;
}

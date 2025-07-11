#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;

#define rep(i, x, y) for (int i = (x); i < (y); i++)
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
    CIN3(int, N, M, D);
    vector<string> s(N);
    VECCIN(s);
    rep(i, 0, N) {
        COUT(s[i]);
    }

    int ans = 0;
    vector<vector<bool>> check_h(M, vector<bool>(N, false));
    vector<vector<bool>> check_w(M, vector<bool>(N, false));

    rep(i, 0, M) {
        rep(j, 0, N) {
            if (s[i][j] == '#') {
                continue;
            }
            if (j != 0 && j != N - 1) {
                if (check_h[i][j - 1] == false && s[i][j - 1] == '.') {
                    ans++;
                    check_h[i][j] = true;
                    check_h[i][j - 1] = true;
                }
                if (check_h[i][j + 1] == false && s[i][j + 1] == '.') {
                    ans++;
                    check_h[i][j] = true;
                    check_h[i][j + 1] = true;
                }
            }
            if (j == 0) {
                if (check_h[i][j + 1] == false && s[i][j + 1] == '.') {
                    ans++;
                    check_h[i][j] = true;
                    check_h[i][j + 1] = true;
                }
            }
            if (j == N - 1) {
                if (check_h[i][j - 1] == false && s[i][j - 1] == '.') {
                    ans++;
                    check_h[i][j] = true;
                    check_h[i][j - 1] = true;
                }
            }
        }
    }
    rep(i, 0, M) {
        rep(j, 0, N) {
            if (s[i][j] == '#') {
                continue;
            }
            if (i != 0 && i != M - 1) {
                if (check_w[i - 1][j] == false && s[i - 1][j] == '.') {
                    ans++;
                    check_w[i][j] = true;
                    check_w[i - 1][j] = true;
                }
                if (check_w[i + 1][j] == false && s[i + 1][j] == '.') {
                    ans++;
                    check_w[i][j] = true;
                    check_w[i + 1][j] = true;
                }
            }
            if (i == 0) {
                if (check_w[i + 1][j] == false && s[i + 1][j] == '.') {
                    ans++;
                    check_w[i][j] = true;
                    check_w[i + 1][j] = true;
                }
            }
            if (i == M - 1) {
                if (check_w[i - 1][j] == false && s[i - 1][j] == '.') {
                    ans++;
                    check_w[i][j] = true;
                    check_w[i - 1][j] = true;
                }
            }
        }
    }

    COUT(ans);

    return 0;
}

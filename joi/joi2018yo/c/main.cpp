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
    CIN2(int, H, W);
    vector<vector<int>> A(H, vector<int>(W));
    rep(i, 0, H) {
        for (auto&x : A[i]) {
            cin >> x;
        }
    }

    int ans = 1000000000;
    rep(i, 0, H) {
        rep(j, 0, W) {
            int sum = 0;
            rep(a, 0, H) {
                rep(b, 0, W) {
                    if (abs(i - a) < abs(j - b)) {
                        sum += A[a][b] * abs(i - a);
                    } else {
                        sum += A[a][b] * abs(j - b);
                    }
                }
            }
            if (sum < ans) {
                ans = sum;
            }
        }
    }

    COUT(ans);

    return 0;
}

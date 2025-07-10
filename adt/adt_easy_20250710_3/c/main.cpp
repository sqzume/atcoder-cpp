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
    CIN(int, N);
    vi q(N), r(N);
    rep(i, 0, N) {
        cin >> q[i] >> r[i];
    }
    CIN(int, Q);
    rep(i, 0, Q) {
        CIN2(int, t, d);
        if (d % q[t - 1] == r[t - 1]) {
            COUT(d);
        } else {
            COUT(d - (d % q[t - 1]) + r[t - 1]);
        }
    }

    return 0;
}

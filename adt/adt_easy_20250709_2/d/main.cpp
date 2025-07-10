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
    CIN2(int, n, m);
    vi u(m), v(m);
    rep(i, 0, m) {
        cin >> u[i] >> v[i];
    }

    set<pair<int, int>> uv;
    rep(i, 0, m) uv.insert({u[i], v[i]});

    int ans = 0;
    rep(a, 1, n - 1) {
        rep(b, 2, n) {
            rep(c, 3, n + 1) {

                bool ab = false, bc = false, ca = false;
                if (uv.find({a, b}) != uv.end()) ab = true;
                if (uv.find({b, c}) != uv.end()) bc = true;
                if (uv.find({a, c}) != uv.end()) ca = true;
                if (ab && bc && ca) ans++;
            }
        }
    }
    COUT(ans);

    return 0;
}

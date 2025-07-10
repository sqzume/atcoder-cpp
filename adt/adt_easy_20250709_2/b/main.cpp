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
    CIN3(int, a, b, c);
    CIN(int, d);
    bool ans = false;
    if (a < c) {
        ans = true;
    } else if (a == c && b < d) {
        ans = true;
    }
    if (ans) {
        No;
    } else {
        Yes;
    }

    return 0;
}

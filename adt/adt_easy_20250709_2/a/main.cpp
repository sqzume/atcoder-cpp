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
    CIN(int, n);
    CIN2(string, s, t);
    int ans = 0;
    rep(i, 0, n) {
        if ((s[i] == t[i]) ||
            (s[i] == '1' && t[i] == 'l') ||
            (s[i] == 'l' && t[i] == '1') ||
            (s[i] == 'o' && t[i] == '0') ||
            (s[i] == '0' && t[i] == 'o')) {
                ans++;
        }
    }
    if (ans == n) {
        Yes;
    } else {
        No;
    }

    return 0;
}

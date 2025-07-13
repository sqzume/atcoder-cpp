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
    string s = "";
    bool b = false;
    rep(i, 0, N) {
        string c;
        int l;
        cin >> c >> l;
        if (100 < s.size() + l) {
            b = true;
            break;
        }
        rep(j, 0, l) {
            s += c;
        }
    }

    if (b) {
        COUT("Too Long");
    } else {
        COUT(s);
    }

    return 0;
}

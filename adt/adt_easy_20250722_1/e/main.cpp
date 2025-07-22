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
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }

    vector<vector<string>> ans(h, vector<string>(w, ""));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            ans[i][j] = s[i][j];
            // cout << ans[i][j];
        }
        // cout << endl;
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w - 1; j++) {
            if (ans[i][j] == "T" && ans [i][j + 1] == "T") {
                ans[i][j] = "P";
                ans[i][j + 1] = "C";
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}

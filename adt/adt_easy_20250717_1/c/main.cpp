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
    int n, t, p;
    cin >> n >> t >> p;
    vector<int> l(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> l[i];
        if (t <= l[i]) sum++;
    }
    if (p <= sum) {
        cout << 0 << endl;
    } else {
        for (int i = 0; i < 101; i++) {
            sum = 0;
            for (int j = 0; j < n; j++) {
                l[j]++;
                if (t <= l[j]) sum++;
            }
            if (p <= sum) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}

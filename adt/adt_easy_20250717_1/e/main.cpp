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
    int h, w, n;
    cin >> h >> w >> n;
    vector<pair<int, int>> a(n);
    vector<pair<int, int>> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> b[i].first;
        a[i].second = i;
        b[i].second = i;
    }

    vector<int> ans_a(n);
    vector<int> ans_b(n);

    sort(a.begin(), a.end());
    int f = 1;
    ans_a[a[0].second] = f;
    for (int i = 1; i < n; i++) {
        if (a[i].first == a[i - 1].first) {
            ans_a[a[i].second] = f;
        } else {
            f++;
            ans_a[a[i].second] = f;
        }
    }

    sort(b.begin(), b.end());
    f = 1;
    ans_b[b[0].second] = f;
    for (int i = 1; i < n; i++) {
        if (b[i].first == b[i - 1].first) {
            ans_b[b[i].second] = f;
        } else {
            f++;
            ans_b[b[i].second] = f;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans_a[i] << " " << ans_b[i] << endl;
    }

    return 0;
}

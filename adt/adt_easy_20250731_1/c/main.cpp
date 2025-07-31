#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i, n) {
        cin >> a[i];
    }

    vector<bool> eated(n, false);
    rep(i, m) {
        ll b;
        cin >> b;
        bool check = false;
        rep(j, n) {
            if (a[j] == b && !eated[j]) {
                eated[j] = true;
                check = true;
                break;
            }
        }
        if (!check) {
            no;
            return 0;
        }
    }

    yes;

    return 0;
}

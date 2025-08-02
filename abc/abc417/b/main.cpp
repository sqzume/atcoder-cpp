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
    vector<ll> a(n), b(m);
    rep(i, n) {
        cin >> a[i];
    }
    rep(i, m) {
        cin >> b[i];
    }

    rep(i, m) {
        rep(j, a.size()) {
            if (b[i] == a[j]) {
                a.erase(a.begin() + j);
                break;
            }
        }
    }

    rep(i, a.size()) {
        cout << a[i];
        if (i != a.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}

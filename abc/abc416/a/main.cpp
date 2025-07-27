#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    ll n, l, r;
    cin >> n >> l >> r;
    string s;
    cin >> s;

    for (ll i = l - 1; i < r; i++) {
        if (s[i] == 'x') {
            no;
            return 0;
        }
    }

    yes;

    return 0;
}

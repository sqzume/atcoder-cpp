#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    string s;
    cin >> s;

    if (s.size() == 1) {
        yes;
        return 0;
    }
    if (s.size() == 2) {
        if (s == "oo") {
            no;
        } else {
            yes;
        }
        return 0;
    }

    for (ll i = 0; i < s.size() - 2; i++) {
        string t = s.substr(i, 3);
        if (t != "xxo" && t != "oxx" && t != "xox") {
            no;
            return 0;
        }
    }

    yes;

    return 0;
}

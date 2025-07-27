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

    bool a = false, b = false, c = false;
    rep(i, s.size()) {
        if (s[i] == 'A') a = true;
        else if (s[i] == 'B') b = true;
        else if (s[i] == 'C') c = true;
    }
    if (a && b && c) {
        yes;
    } else {
        no;
    }

    return 0;
}

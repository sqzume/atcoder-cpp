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

    set<char> n;
    rep(i, s.size()) {
        n.insert(s[i]);
    }

    if (n.size() == 3) {
        cout(6);
    } else if (n.size() == 2) {
        cout(3);
    } else {
        cout(1);
    }

    return 0;
}

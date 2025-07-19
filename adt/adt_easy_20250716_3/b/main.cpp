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
    int ans = 0;
    rep(i, 12) {
        cin >> s;
        if (s.size() == i + 1) ans++;
    }
    cout(ans);

    return 0;
}

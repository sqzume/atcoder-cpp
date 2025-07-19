#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int k;
    cin >> k;
    rep(i, k) {
        cout << s[i];
    }

    return 0;
}

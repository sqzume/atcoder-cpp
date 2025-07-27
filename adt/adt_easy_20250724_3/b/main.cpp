#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    string n;
    cin >> n;

    for (int i = 0; i < n.size() - 1; i++) {
        if (int(n[i] - '0') <= int(n[i + 1] - '0')) {
            no;
            return 0;
        }
    }

    yes;

    return 0;
}

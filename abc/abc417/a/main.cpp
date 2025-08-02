#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    for (int i = a; i < n - b; i++) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}

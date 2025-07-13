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

    int ans = 0;
    vector<int> a, b, c;
    rep(i, s.size()) {
        if (s[i] == 'A') {
            a.push_back(i);
        } else if (s[i] == 'B') {
            b.push_back(i);
        } else if (s[i] == 'C') {
            c.push_back(i);
        }
    }
    rep(i, a.size()) {
        rep(j, b.size()) {
            if (a[i] < b[j] && find(c.begin(), c.end(), b[j] + b[j] - a[i]) != c.end()) {
                ans++;
            }
        }
    }

    cout(ans);

    return 0;
}

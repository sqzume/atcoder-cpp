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

    int n = 0;
    vector<int> v;
    rep(i, s.size()) {
        if (s[i] == '#') {
            n++;
            v.push_back(i);
        }
    }

    for (int i = 0; i < v.size(); i += 2) {
        cout << v[i] + 1 << ',' << v[i + 1] + 1 << '\n';
    }

    return 0;
}

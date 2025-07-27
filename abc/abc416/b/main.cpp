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

    vector<char> t(s.size());
    bool needSharp = false;
    rep(i, s.size()) {
        if (s[i] == '#') {
            t[i] = s[i];
            if (needSharp) needSharp = false;
            continue;
        }
        if (s[i] == '.') {
            if (!needSharp) {
                t[i] = 'o';
                needSharp = true;
                continue;
            }
            if (needSharp) {
                t[i] = s[i];
                continue;
            }
        }
    }

    rep(i, t.size()) {
        cout << t[i];
    }
    cout << endl;

    return 0;
}

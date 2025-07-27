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

    vector<int> count(26, 0);
    rep(i, s.size()) {
        count[int(s[i]) - 97]++;
    }

    pair<int, int> max = {0, 0};
    rep(i, 26) {
        if (count[i] > max.first) {
            max = {count[i], i};
        }
    }

    cout((char)(max.second + 'a'));

    return 0;
}

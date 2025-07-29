#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    ll n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) {
        cin >> s[i];
    }

    vector<ll> rank(n, 0);

    rep(i, n) {
        rep(j, n) {
            if (s[i][j] == 'o') {
                rank[i]++;
            }
        }
    }

    rep(i, n) {
        pair<ll, ll> max = {-1, 0};
        rep(j, n) {
            if (max.first < rank[j]) {
                max.first = rank[j];
                max.second = j;
            }
        }
        cout << max.second + 1;
        if (i != n - 1) cout << " ";
        rank[max.second] = -1;
    }
    cout << endl;

    return 0;
}

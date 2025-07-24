#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    int t;
    cin >> t;

    rep(i, t) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> v;
        rep(j, n) {
            v.push_back(pow(2, j));
        }

        auto check = [&](int idx) {
            if (s[idx] == '0') {
                rep(j, n) {
                    bool check = false;
                    int v_size = v.size();
                    rep(k, v_size) {
                        if (s[idx - v[k]] == '0') {
                            check = true;
                            idx -= v[k];
                            v.erase(v.begin() + k);
                            break;
                        }
                    }
                }
            }
        };
    }

    return 0;
}

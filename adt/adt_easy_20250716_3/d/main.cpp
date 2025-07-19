#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s_1(h);
    rep(i, h) {
        cin >> s_1[i];
    }

    bool ans = false;
    auto check = [&](vector<string> s, bool reversed) {
        rep(i, h) {
            rep(j, w) {
                if ((j + 4 < w) &&
                    (s[i][j] == 's') &&
                    (s[i][j + 1] == 'n') &&
                    (s[i][j + 2] == 'u') &&
                    (s[i][j + 3] == 'k') &&
                    (s[i][j + 4] == 'e')) {
                    rep(k, 5) {
                        if (reversed) {
                            cout << h - i << ' ' << w - j - k << '\n';
                        } else {
                            cout << i + 1 << ' ' << j + k + 1 << '\n';
                        }
                    }
                    ans = true;
                }
                if ((i + 4 < h) &&
                    (s[i][j] == 's') &&
                    (s[i + 1][j] == 'n') &&
                    (s[i + 2][j] == 'u') &&
                    (s[i + 3][j] == 'k') &&
                    (s[i + 4][j] == 'e')) {
                    rep(k, 5) {
                        if (reversed) {
                            cout << h - i - k << ' ' << w - j << '\n';
                        } else {
                            cout << i + k + 1 << ' ' << j + 1 << '\n';
                        }
                    }
                    ans = true;
                }
                if ((i + 4 < h) &&
                    (j + 4 < w) &&
                    (s[i][j] == 's') &&
                    (s[i + 1][j + 1] == 'n') &&
                    (s[i + 2][j + 2] == 'u') &&
                    (s[i + 3][j + 3] == 'k') &&
                    (s[i + 4][j + 4] == 'e')) {
                    rep(k, 5) {
                        if (reversed) {
                            cout << h - i - k << ' ' << w - j - k << '\n';
                        } else {
                            cout << i + k + 1 << ' ' << j + k + 1 << '\n';
                        }
                    }
                    ans = true;
                }
                if ((i + 4 < h) &&
                    (j - 4 >= 0) &&
                    (s[i][j] == 's') &&
                    (s[i + 1][j - 1] == 'n') &&
                    (s[i + 2][j - 2] == 'u') &&
                    (s[i + 3][j - 3] == 'k') &&
                    (s[i + 4][j - 4] == 'e')) {
                    rep(k, 5) {
                        if (reversed) {
                            cout << h - i - k << ' ' << w - j + k << '\n';
                        } else {
                            cout << i + k + 1 << ' ' << j - k + 1 << '\n';
                        }
                    }
                    ans = true;
                }
            }
        }
    };

    check(s_1, false);
    if (!ans) {
        vector<string> s_reversed(h);
        rep(i, h) {
            s_reversed[i] = s_1[h - i - 1];
        }
        check(s_reversed, true);
    }

    return 0;
}

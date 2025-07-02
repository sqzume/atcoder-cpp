#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    bool prefix = true, suffix = true;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            prefix = false;
        }
        if (s[n - 1 - i] != t[m - 1 - i]) {
            suffix = false;
        }
    }

    if (prefix && suffix) {
        cout << 0 << endl;
    } else if (prefix && !suffix) {
        cout << 1 << endl;
    } else if (!prefix && suffix) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int ans = 0;
    for (int i = 0; i < t.size(); i++) {
        if (s[i] != t[i]) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}

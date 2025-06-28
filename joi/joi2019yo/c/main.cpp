#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    const int s_size = s.size();
    for (int i = 0; i < s_size - 1; i++) {
        if (s[i] == s[i + 1]) {
            continue;
        }
        if ((s[i] == 'O' && s[i + 1] == 'X') ||
            (s[i] == 'X' && s[i + 1] == 'O')) {
            ans++;
            i++;
        }
    }

    cout << ans << endl;
}

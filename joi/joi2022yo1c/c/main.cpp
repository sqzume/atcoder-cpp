#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'R') {
            ans++;
        }
    }

    if (ans == k) {
        cout << "W" << endl;
    } else {
        cout << "R" << endl;
    }
}

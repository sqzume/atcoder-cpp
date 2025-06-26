#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    bool ans = true;
    vector<int> t(n + 1);
    t[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        cin >> t[i];
        if (s < t[i] - t[i - 1]) {
            ans = false;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

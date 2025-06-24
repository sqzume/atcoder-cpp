#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> c(n + 1);
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        c[l]++;
        c[r]--;
    }

    for (int i = 1; i < n + 1; i++) {
        c[i] += c[i - 1];
    }

    int ans = 1e9;
    for (int i = 0; i < n; i++) {
        ans = min(ans, c[i]);
    }

    cout << ans << endl;
}

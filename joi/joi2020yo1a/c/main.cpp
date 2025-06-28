#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> ans(n + m);
    for (int i = 0; i < n + m; i++) {
        cin >> ans[i];
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < n + m; i++) {
        cout << ans[i] << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 1; i <= n; i++) {
        a[i - 1] = i;
    }

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        a[x - 1] = y;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
}

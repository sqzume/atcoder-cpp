#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int k = 0, l = 1, ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            l++;
            if (ans < l) {
                ans = l;
            }
        } else {
            if (ans < l) {
                ans = l;
            }
            l = 1;
            k = a[i];
        }
    }

    cout << ans << "\n";
}

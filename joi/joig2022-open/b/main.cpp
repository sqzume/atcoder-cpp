#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if ((k != i && k != j) && (a[k] == a[i] * a[j]) && (i < k && j < k)) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}

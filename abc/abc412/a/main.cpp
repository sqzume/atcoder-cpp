#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a < b) {
            ans++;
        }
    }

    cout << ans << endl;
}

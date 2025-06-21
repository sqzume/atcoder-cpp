#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    int ans = 0;
    while (x < n) {
        if (x % 3 == 0) {
            x++;
        } else if (x % 3 == 1) {
            x *= 2;
        } else if (x % 3 == 2) {
            x *= 3;
        }
        ans++;
    }

    cout << ans << endl;
}

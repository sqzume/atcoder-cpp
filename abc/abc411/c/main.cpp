#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a, ans = 0;
    vector<int> m(n);
    for (int i = 0; i < n; i++) {
        m[i] = -1;
    }

    for (int i = 0; i < q; i++) {
        cin >> a;
        // cout << a << endl;
        a--;
        // cout << a << endl;
        int a_here = m[a];
        // cout << "its here" << endl;
        if (n == 1) {
            if (a_here == -1) {
                ans++;
            }
            if (a_here == 1) {
                ans--;
            }
            m[a] *= -1;
            cout << ans << endl;
            continue;
        }
        if (a != 0 && a != n - 1) {
            // cout << "its back and forward" << endl;
            int a_backward = m[a - 1];
            int a_forward = m[a + 1];
            // cout << "its back and forward" << endl;
            if ((a_backward == -1 && a_here == -1 && a_forward == -1) ||
                (a_backward == 1 && a_here == 1 && a_forward == 1)) {
                ans++;
            }
            if ((a_backward == -1 && a_here == 1 && a_forward == -1) ||
                (a_backward == 1 && a_here == -1 && a_forward == 1)) {
                ans--;
            }
            m[a] *= -1;
        } else if (a == 0) {
            int a_forward = m[a + 1];
            if (a_forward == -1 && a_here == -1) {
                ans++;
            }
            if (a_forward == -1 && a_here == 1) {
                ans--;
            }
            m[a] *= -1;
        } else if (a == n - 1) {
            // cout << "its backward" << endl;
            int a_backward = m[a - 1];
            // cout << "its backward" << endl;
            if (a_backward == -1 && a_here == -1) {
                ans++;
            }
            if (a_backward == -1 && a_here == 1) {
                ans--;
            }
            m[a] *= -1;
        }
        cout << ans << endl;
    }
}

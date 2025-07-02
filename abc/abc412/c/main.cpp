#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto& a : A) cin >> a;


    int ans = 1, last = 0;
    while (true) {
        if (2 * A[last] >= A[N]) {
            ans++;
            break;
        }
        int max = 0;
        for (int i = 1; i < N; i++) {
            if (2 * A[last] >= A[i] && max < A[i]) {
                max = A[i];
            }
        }
        if ((max == 0) ||
            (max <= A[last])) {
            cout << -1 << endl;
            break;
        }
        last++;
        A[last] = max;
    }

    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
}

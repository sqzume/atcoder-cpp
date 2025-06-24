#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, l;
    cin >> n >> l;
    if (l % 3 != 0) {
        cout << 0 << endl;
        exit(0);
    }
    long long d = 0;
    vector<long long> cnt(l, 0);
    cnt[0] = 1;
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> d;
        sum = (sum + d) % l;
        cnt[sum]++;
    }

    long long ans = 0;
    for (int i = 0; i < l / 3; i++) {
        ans += cnt[i] * cnt[i + l / 3] * cnt[i + l / 3 * 2];
    }

    cout << ans << endl;
}

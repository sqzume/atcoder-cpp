#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n, k;
    cin >> n >> k;

    set<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }

    int64_t num;
    if (k % 2 == 0) {
        num = (1 + k) * (k / 2);
    } else {
        num = (1 + k) * (k / 2) + (k / 2) + 1;
    }

    // cout << num << endl;

    for (const auto& elem : a) {
        if (elem <= k) num -= elem;
    }

    cout << num << endl;
}

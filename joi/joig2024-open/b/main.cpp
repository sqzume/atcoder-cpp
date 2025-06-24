#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n * 2);
    for (int i = 0; i < n * 2; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    bool ans = true;
    for (int i = 0; i < n * 2; i += 2) {
        if (d < a[i + 1] - a[i]) {
            ans = false;
        }
    }

    if (ans) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }
}

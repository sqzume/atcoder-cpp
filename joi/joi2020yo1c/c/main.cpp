#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b;
    b.push_back(0);
    for (int i = 1; i < n; i++) {
        if (a[i - 1] <= a[i]) {
            b.push_back(b[i - 1] + 1);
        } else {
            b.push_back(0);
        }
    }

    sort(b.begin(), b.end());
    cout << b[n - 1] + 1 << "\n";
}

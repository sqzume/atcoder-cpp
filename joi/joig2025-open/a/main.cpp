#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    long long sum_even = 0;
    long long sum_odd = 0;
    int k_even = k, k_odd = k;

    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        if (a.at(i) % 2 == 0 && k_even != 0) {
            sum_even += a.at(i);
            k_even -= 1;
        }
        if (a.at(i) % 2 == 1 && k_odd != 0) {
            sum_odd += a.at(i);
            k_odd -= 1;
        }
    }

    if (k_even != 0) {
        sum_even = 0;
    }
    if (k_odd != 0) {
        sum_odd = 0;
    }

    if (sum_even < sum_odd) {
        cout << sum_odd << endl;
    } else {
        cout << sum_even << endl;
    }
}

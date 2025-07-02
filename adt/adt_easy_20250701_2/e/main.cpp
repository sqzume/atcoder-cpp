#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long num = 0;
    vector<long long> num_vec(n);
    for (int i = 0; i < n; i++) {
        num += a[i];
        num_vec[i] = num;
    }

    t = t % num;

    for (int i = 0; i < n; i++) {
        if (t < num_vec[i]) {
            if (i == 0) {
                cout << 1 << " " << t << endl;
                break;
            }
            cout << i + 1 << " " << t - num_vec[i - 1] << endl;
            break;
        }
    }
}

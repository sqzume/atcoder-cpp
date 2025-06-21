#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> d(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> d[i];
    }

    vector<int> d_sum;
    d_sum.push_back(d[0]);
    cout << d[0] << " ";
    for (int i = 1; i < n - 1; i++) {
        d_sum.push_back(d[i] + d_sum[i - 1]);
        cout << d[i] + d_sum[i - 1];
        if (i != n - 2) cout << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            cout << d_sum[j] - d_sum[i];
            if (j != n - 2) cout << " ";
        }
        cout << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> a_sort = a;

    sort(a_sort.begin(), a_sort.end());
    int max = a_sort[n - 1], min = a_sort[0];
    for (int i = 0; i < n; i++) {
        if (a[i] - min < max - a[i]) {
            cout << max - a[i] << endl;
        } else {
            cout << a[i] - min << endl;
        }
    }
}

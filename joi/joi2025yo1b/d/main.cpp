#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    vector<int> b(n);
    b = a;

    for (int i = n - 1; 0 < i; i--) {
        for (int j = 0; j < i; j++) {
            cout << a.at(j) + a.at(j + 1);
            b.at(j) = a.at(j) + a.at(j + 1);
            if (j != i - 1) cout << " ";
        }
        cout << endl;
        a = b;
    }
}

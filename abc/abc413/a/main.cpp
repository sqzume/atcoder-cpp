#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int num = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        num += x;
    }

    if (num <= m) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

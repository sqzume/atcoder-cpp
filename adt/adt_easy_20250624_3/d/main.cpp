#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0, y = 0;
    cin >> x >> y;
    int a = 0;
    int x_sum = 1, y_sum = 1;
    for (int i = 0; i < (n - 2) * 2; i++) {
        cin >> a;
        if (a == x) {
            x_sum++;
        }
        if (a == y) {
            y_sum++;
        }
    }

    if (x_sum == n - 1 || y_sum == n - 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    double a = 0.0;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            if (x <= i + j || y <= abs(i - j)) {
                a += 1.0;
            }
        }
    }
    cout << fixed << setprecision(20);
    cout << a / 36.0 << endl;
}

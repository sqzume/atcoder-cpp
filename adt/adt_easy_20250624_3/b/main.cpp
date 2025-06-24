#include <bits/stdc++.h>
using namespace std;

int main() {
    double a;
    cin >> a;
    int b = (int)(a * 10) % 10;
    if (0 <= b && b <= 2) {
        cout << (int)a << "-" << endl;
    } else if (3 <= b && b <= 6) {
        cout << (int)a << endl;
    } else if (7 <= b && b <= 9) {
        cout << (int)a << "+" << endl;
    }
}

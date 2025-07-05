#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % 2 == 0 && i == n / 2) {
            cout << "==";
            i++;
            continue;
        }
        if (n % 2 == 1 && i == n / 2 + 1) {
            cout << "=";
            continue;
        }
        cout << "-";
    }
    cout << endl;
}

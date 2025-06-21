#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % a == 0 && i % b != 0) {
            count++;
        }
        if (i % a != 0 && i % b == 0) {
            count++;
        }
    }
    cout << count << endl;
}

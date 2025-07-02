#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    vector<string> a{"ABC", "ARC", "AGC", "AHC"};
    vector<bool> b(4, true);
    for (int i = 0; i < 4; i++) {
        if (s1 == a[i]) {
            b[i] = false;
        }
        if (s2 == a[i]) {
            b[i] = false;
        }
        if (s3 == a[i]) {
            b[i] = false;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (b[i] == true) {
            cout << a[i] << endl;
        }
    }
}


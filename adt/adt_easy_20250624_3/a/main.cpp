#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (char c = 'a'; c <= 'z'; c++) {
        if (s.size() < s.find(c)) {
            cout << c << endl;
            break;
        }
    }
}

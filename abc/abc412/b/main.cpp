#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    bool ans = true;
    int s_size = s.size();
    for (int i = 1; i < s_size; i++) {
        if (isupper(s[i]) && t.find(s[i - 1]) == string::npos) {
            ans = false;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<string> s;
    string t;
    for (int i = 0; i < q; i++) {
        cin >> t;
        if (t != "READ") {
            s.push_back(t);
            continue;
        }
        cout << s.back() << endl;
        s.pop_back();
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(a[i]);
    }

    bool ans = false;
    for (int i = 0; i < n; i++) {
        if (s.count(a[i] + 3) && s.count(a[i] + 6)) {
            ans = true;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }

    cout << a.size() << endl;

    bool first = true;
    for (const auto& x : a) {
        if (!first) cout << " ";
        cout << x;
        first = false;
    }
    cout << endl;
}

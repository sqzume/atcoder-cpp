#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> s(1000000, -1);
    set<int> ans;
    for (int i = 0; i < n; i++) {
        if (s[a[i] - 1] == -1) {
            s[a[i] - 1] = i;
        } else {
            ans.insert(i - s[a[i] - 1] + 1);
            s[a[i] - 1] = -1;
        }
    }
    if (ans.size() == 0) {
        cout << -1 << endl;
    } else {
        cout << *ans.begin() << endl;
    }
}

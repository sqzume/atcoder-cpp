#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(7);
    for (int i = 0; i < 7; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int twoCards = 0, threeCards = 0;
    set<int> s;
    for (int i = 0; i < 7; i++) {
        if (i <= 4) {
            if (a[i] == a[i + 1] && a[i + 1] == a[i + 2]) {
                threeCards = 1;
                s.insert(a[i]);
            }
        }
        if (i <= 5) {
            if (a[i] == a[i + 1]) {
                twoCards = 1;
                s.insert(a[i]);
            }
        }
    }
    if (threeCards == 1 && twoCards == 1 && s.size() != 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
        // cout << s.size() << endl;
        // cout << twoCards << " " << threeCards << endl;
    }
}

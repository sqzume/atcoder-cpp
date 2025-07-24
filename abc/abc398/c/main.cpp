#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> s;
    set<int> isntUnique;
    rep(i, n) {
        cin >> a[i];
        if (s.count(a[i]) != 0) {
            isntUnique.insert(a[i]);
        }
        s.insert(a[i]);
    }

    pair<int, int> max = {0, 0};
    rep(i, n) {
        if (isntUnique.count(a[i]) == 0 && max.second < a[i]) {
            max = {i + 1, a[i]};
        }
    }

    if (max.first == 0) {
        cout(-1);
    } else {
        cout(max.first);
    }

    return 0;
}

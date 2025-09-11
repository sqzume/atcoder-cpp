#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n, k;
    cin >> n >> k;
    set<ll> st;
    rep(i, n) {
        ll x;
        cin >> x;
        st.insert(x);
    }

    vector<ll> a;
    for (auto v : st) {
        a.push_back(v);
    }
    ll c = 1;
    for (ll i = 1; i < a.size(); i++) {
        if (a[i] - a[i - 1] == 1) c++;
        else c = 1;
        if (c == k) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

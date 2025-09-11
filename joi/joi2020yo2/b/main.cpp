#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> st(n);
    rep(i, n) cin >> st[i].first >> st[i].second;

    sort(st.begin(), st.end());
    ll time = st[n - 1].first;
    if (time < st[n - 1].second) time += st[n - 1].second - time;
    for (ll i = n - 2; 0 <= i; i--) {
        time += (st[i + 1].first - st[i].first);
        if (time < st[i].second) time += st[i].second - time;
    }
    time += st[0].first;
    cout << time << endl;
    return 0;
}

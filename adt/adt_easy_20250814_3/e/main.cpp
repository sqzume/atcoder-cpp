#include <bits/stdc++.h>
using namespace std;

// ===== エイリアス =====
using ll = long long;
ll INF = 2e18;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define cout(x) cout << (x) << '\n'
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

// ===== デバッグ用 =====
#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#endif

int main() {
    ll n, d;
    cin >> n >> d;
    vector<pair<ll, ll>> x(n);
    rep(i, n) {
        cin >> x[i].first >> x[i].second;
    }

    queue<pair<ll, ll>> q;
    vector<bool> infected(n, false);
    infected[0] = true;
    q.push({x[0].first, x[0].second});
    while (q.size() != 0) {
        ll a = q.front().first;
        ll b = q.front().second;
        q.pop();
        rep(i, n) {
            if (infected[i]) continue;
            if ((a - x[i].first) * (a - x[i].first) + (b - x[i].second) * (b - x[i].second) <= d * d) {
                infected[i] = true;
                q.push({x[i].first, x[i].second});
            }
        }
    }
    rep(i, n) {
        if (infected[i]) cout("Yes");
        else cout("No");
    }

    return 0;
}

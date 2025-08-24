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
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    vector<ll> num(n, 0);
    rep(i, n) num[i] = min(a[i], b[i]);
    ll sum = 0;
    rep(i, n) sum += num[i];

    rep(i, q) {
        string c;
        ll x, v;
        cin >> c >> x >> v;
        x--;
        if (c == "A") {
            if (v <= num[x]) {
                sum -= num[x] - v;
                num[x] = v;
            } else if (num[x] == a[x]) {
                if (v <= b[x]) {
                    sum += v - a[x];
                    num[x] = v;
                } else {
                    sum += b[x] - a[x];
                    num[x] = b[x];
                }
            }
            a[x] = v;
        }
        if (c == "B") {
            if (v <= num[x]) {
                sum -= num[x] - v;
                num[x] = v;
            } else if (num[x] == b[x]) {
                if (v <= a[x]) {
                    sum += v - b[x];
                    num[x] = v;
                } else {
                    sum += a[x] - b[x];
                    num[x] = a[x];
                }
            }
            b[x] = v;
        }
        cout(sum);
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

string convert(string n) {
    // 8進数から10進数へ変換
    ll a = 0;
    ll d = 1;
    for (ll i = n.size() - 1; 0 <= i; i--) {
        a += d * (n[i] - '0');
        d *= 8;
    }

    // 10進数から9進数へ変換
    string b = "";
    while (0 < a) {
        string s = to_string(a % 9);
        if (s == "8") s = "5";
        b = s + b;
        a /= 9;
    }
    return b;
}

int main() {
    string n;
    ll k;
    cin >> n >> k;
    if (n == "0") {
        cout << 0 << endl;
        return 0;
    }
    rep(i, k) {
        n = convert(n);
    }
    cout << n << endl;
    return 0;
}

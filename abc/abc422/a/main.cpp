#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    ll world = s[0]-'0', stage = s[2]-'0';
    if (stage < 8) {
        stage++;
    } else if (world < 8) {
        world++;
        stage = 1;
    }
    cout << world << '-' << stage << endl;
    return 0;
}

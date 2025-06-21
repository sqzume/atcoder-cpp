#include <array>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    // vector<string> str(n + 1);
    array<string, 200001> str;

    for (int i = 0; i < q; i++) {
        int query_type;
        cin >> query_type;
        if (query_type == 1) {
            int p;
            cin >> p;
            str[p] = str[0];
        } else if (query_type == 2) {
            int p;
            string s;
            cin >> p >> s;
            str[p] = str[p] + s;
        } else if (query_type == 3) {
            int p;
            cin >> p;
            str[0] = str[p];
        }
    }
    cout << str[0] << endl;
}

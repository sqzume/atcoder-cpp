#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> turnRight(int n, vector<vector<string>> s) {
    vector<vector<string>> u(n, vector<string>(n));
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; 0 <= j; j--) {
            u[i][n - 1 - j] = s[j][i];
            // cout << s[j][i];
            // if (j != 0) cout << " ";
        }
        // cout << endl;
    }
    return u;
}

int check(vector<vector<string>> s, vector<vector<string>> t, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] != t[i][j]) {
                sum++;
            }
        }
    }
    // cout << sum << endl;
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<vector<string>> s(n, vector<string>(n));
    vector<vector<string>> t(n, vector<string>(n));
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        for (int j = 0; j < n; j++) {
            s[i][j] = x[j];
            // cout << x[j];
            // if (j != n - 1) cout << " ";
        }
        // cout << endl;
    }
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        for (int j = 0; j < n; j++) {
            t[i][j] = x[j];
            // cout << x[j];
            // if (j != n - 1) cout << " ";
        }
        // cout << endl;
    }

    int min_ = 10000;
    vector<int> turn(4);
    for (int i = 0; i < 4; i++) {
        turn[i] = check(s, t, n);
        if (turn[i] < min_) min_ = turn[i];
        s = turnRight(n, s);
    }

    // cout << min << endl;

    int ans = 10000;
    for (int i = 0; i < 4; i++) {
        ans = min(ans, turn[i] + i);
    }

    cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool cycle_flag = false;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i != 0) {
            continue;
        }

        vector<char> cycle(i);
        for (int j = 0; j < i; j++) {
            cycle.at(j) = s.at(j);
            // cycle.push_back(s.at(j));
        }

        int match_count = 0;
        for (int j = 0; j < n / i; j++) {
            for (int k = 0; k < i; k++) {
                if (s.at(j * i + k) == cycle.at(k)) {
                    match_count += 1;
                }
            }
        }

        if (match_count == n) {
            cycle_flag = true;
            break;
        }
    }

    if (cycle_flag == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

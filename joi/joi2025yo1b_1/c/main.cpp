#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    int score_a = 0, score_b = 0;
    for (int i = 0; i < n; i++) {
        if (s.at(i) == 'S' && t.at(i) == 'P') {
            score_a++;
        }
        if ((s.at(i) == 'R' && t.at(i) == 'P') ||
            (s.at(i) == 'S' && t.at(i) == 'R')) {
            score_b++;
        }
    }
    cout << score_a << " " << score_b << endl;
}

#include <bits/stdc++.h>
using namespace std;
bool compare(string& s1,string& s2){return s1.size()<s2.size();}

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    sort(s.begin(), s.end(), compare);

    string ans = "";
    for (int i = 0; i < n; i++) {
        ans += s[i];
    }

    cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    vector<pair<long long, long long>> t;
    queue<long long> type_two;
    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        if (query == 1) {
            long long c, x;
            cin >> c >> x;
            t.push_back({x, c});
        }
        if (query == 2) {
            long long k;
            cin >> k;
            type_two.push(k);
        }
    }

    // for debug
    // int len_1 = t.size();
    // for (int i = 0; i < len_1; i++) {
    //     cout << t[i].first << " " << t[i].second << endl;
    // }
    // int len_2 = type_two.size();
    // for (int i = 0; i < len_2; i++) {
    //     cout << type_two.front() << endl;
    //     type_two.pop();
    // }

    pair<long long, long long> index = {0, 0};
    int len_type_two = type_two.size();
    for (int i = 0; i < len_type_two; i++) {
        long long num = 0;
        long long k = type_two.front();
        type_two.pop();

        // for debug
        // cout << "queue " << i << endl;
        // cout << "k " << k << endl;

        while (k != 0) {
            if (k <= t[index.first].second - index.second) {
                num += k * t[index.first].first;
                index.second += k;
                k = 0;

                // for debug
                // cout << "type 1" << endl;
                // cout << "num: " << num << " index: " << index.first << "," << index.second << " k: " << k << endl;
                // cout << num << " " << index.second << " " << k << endl;

                continue;
            }
            if (t[index.first].second - index.second < k) {
                // for debug
                // cout << "type 2" << endl;
                // cout << "num: " << num << " index: " << index.first << "," << index.second << " k: " << k << endl;

                num += (t[index.first].second - index.second) * t[index.first].first;
                k -= t[index.first].second - index.second;
                index.first++;
                index.second = 0;

                // for debug
                // cout << "num: " << num << " index: " << index.first << "," << index.second << " k: " << k << endl;
                continue;
            }
        }

        cout << num << endl;
    }
}

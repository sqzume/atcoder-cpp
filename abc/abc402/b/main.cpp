#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    queue<int> queue;
    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        if (query == 1) {
            int x;
            cin >> x;
            queue.push(x);
        }
        if (query == 2) {
            cout << queue.front() << endl;
            queue.pop();
        }
    }
}

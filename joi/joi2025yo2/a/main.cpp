#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, q;
    cin >> h >> w >> q;

    vector<vector<int>> paper(h, vector<int>(w, 0));
    vector<vector<bool>> paper_mask(h, vector<bool>(w, false));

    for (int i = 0; i < q; i++) {
        int qk;
        cin >> qk;
        if (qk == 1) {
            int x, y, c;
            cin >> x >> y >> c;
            x -= 1, y -= 1;

            for (int dx = 0; dx < 2; dx++) {
                for (int dy = 0; dy < 2; dy++) {
                    int nx = x + dx;
                    int ny = y + dy;
                    if ((nx < h && ny < w) &&
                        (paper_mask[nx][ny] == false)) {
                        paper[nx][ny] = c;
                    }
                }
            }
        }
        if (qk == 2) {
            int x, y;
            cin >> x >> y;
            x -= 1, y -= 1;

            for (int dx = 0; dx < 2; dx++) {
                for (int dy = 0; dy < 2; dy++) {
                    int nx = x + dx;
                    int ny = y + dy;
                    if (nx < h && ny < w) {
                        paper_mask[nx][ny] = true;
                    }
                }
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << paper[i][j];
            if (j < w - 1) cout << " ";
        }
        cout << endl;
    }
}

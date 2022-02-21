#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<vector<int>> v(h + 100, vector<int>(w + 100, 0));
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            char c; int cv = -1; cin >> c;
            if (c == '.') cv = 0;
            if (c == '1') cv = 1;
            if (c == '2') cv = 2;
            if (c == '3') cv = 3;
            if (c == '4') cv = 4;
            if (c == '5') cv = 5;
            v[i][j] = cv;
        }
    }
    vector<int> dx = {0, 1, 0, -1}, dy = {1, 0, -1, 0};
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (v[i][j] != 0) continue;
            vector<bool> a(6, false);
            for (int k = 0; k < 4; k++) {
                int nx = i + dx[k], ny = j + dy[k];
                a[v[nx][ny]] = true;
            }
            for (int k = 1; k <= 5; k++) {
                if (a[k]) continue;
                v[i][j] = k;
                break;
            }
        }
    }
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) cout << v[i][j];
        cout << endl;
    }
}

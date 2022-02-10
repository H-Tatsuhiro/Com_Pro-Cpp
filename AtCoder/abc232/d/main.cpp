#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<vector<char>> c(h, vector<char>(w, '.'));
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> c[i][j];
    vector<vector<int>> count(h + 1, vector<int>(w + 1, 0));
    for (int i = h - 1; i >= 0; i--) {
        for (int j = w - 1; j >= 0; j--) {
            if (c[i][j] == '#') continue;
            count[i][j] = max(count[i + 1][j], count[i][j + 1]) + 1;
        }
    }
    cout << count[0][0] << endl;
}

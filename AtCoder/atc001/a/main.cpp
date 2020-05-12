#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int H, W, sx, sy, gx, gy;
vector<vector<char>> S(1010, vector<char>(1010, ' '));
vector<vector<bool>> reached(1010, vector<bool>(1010, false));

void dfs(vector<vector<char>> &c, int x, int y) {
    if (reached[x][y]) return;

    reached[x][y] = true;

    if(x > 0 && c[x - 1][y] != '#' && reached[x - 1][y] == false) dfs(c, x - 1 ,y);
    if(y > 0 && c[x][y - 1] != '#' && reached[x][y - 1] == false) dfs(c, x, y - 1);
    if(x < H - 1 && c[x + 1][y] != '#' && reached[x + 1][y] == false) dfs(c, x + 1, y);
    if(y < W - 1 && c[x][y + 1] != '#' && reached[x][y + 1] == false) dfs(c, x, y + 1);
}

int main() {
    cin >> H >> W;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> S[i][j];
            if (S[i][j] == 's') sx = i, sy = j;
            if (S[i][j] == 'g') gx = i, gy = j;
        }
    }
    dfs(S, sx, sy);
    if (reached[gx][gy]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
int main() {
    int r, c; cin >> r >> c;
    vector<vector<char>> v(r, vector<char>(c, ' '));
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) cin >> v[i][j];
    function<void(int, int, int)> bfs = [&](int x, int y, int z){
        if (z == -1) return 0;
        if (v[x][y] == '#') v[x][y] = '.';
        if (x + 1 < r) bfs(x + 1, y, z - 1);
        if (x - 1 >= 0) bfs(x - 1, y, z - 1);
        if (y + 1 < c) bfs(x, y + 1, z - 1);
        if (y - 1 >= 0) bfs(x, y - 1, z - 1);
        return 0;
    };
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) if (v[i][j] != '.' && v[i][j] != '#') bfs(i, j, v[i][j] - '1' + 1), v[i][j] = '.';
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cout << v[i][j];
        cout << endl;
    }
}



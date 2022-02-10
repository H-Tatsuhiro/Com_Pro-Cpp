#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b;
    vector<vector<char>> s(3, vector<char>(3, '_'));
    cin >> a >> b;
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) cin >> s[i][j];
    int ans = 0;
    vector<vector<char>> v(9, vector<char>(9, '_'));
    vector<int> dx = {-1, 0, 1}, dy = {-1, 0, 1};
    function<void(int, int)> solve = [&](int x, int y) -> void {
        if (v[x][y] == '#') return;
        else v[x][y] = '#', ans++;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (s[dx[i] + 1][dy[j] + 1] == '.') continue;
                int nx = x + dx[i], ny = y + dy[j];
                if (nx < 0 || nx >= 9 || ny < 0 || ny >= 9) continue;
                solve(nx, ny);
            }
        }
    };
    solve(a - 1, b - 1);
    cout << ans << endl;
}

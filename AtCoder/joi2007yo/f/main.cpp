#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    vector<vector<int>> v(a, vector<int>(b, 0));
    int n; cin >> n;
    vector<vector<bool>> Map(20, vector<bool>(20, false));
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        Map[x - 1][y - 1] = true;
    }
    v[0][0] = 1;
    function<void(int, int)> solve = [&](int i, int j) -> void {
        if (i == a || j == b) return;
        int p = 0, q = 0;
        if (i - 1 >= 0) p = v[i - 1][j];
        if (j - 1 >= 0) q = v[i][j - 1];
        if (!Map[i][j]) v[i][j] = p + q;
        else v[i][j] = 0;
        solve(i + 1, j);
        solve(i, j + 1);
    };
    solve(0, 1);
    solve(1, 0);
    cout << v[a - 1][b - 1] << endl;
}

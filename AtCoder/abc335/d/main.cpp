#include <iostream>
#include <cmath>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));
    v[n / 2][n / 2] = -1;
    int c = 0;
    vector<int> p = {1, 0, -1, 0}, q = {0, 1, 0, -1};
    function<void(int, int, int)> f = [&](int x, int y, int d){
        v[x][y] = d;
        int nx = x + p[c], ny = y + q[c];
        if  (nx < 0 || ny < 0 || nx >= n || ny >= n || v[nx][ny] != 0)  c = (c + 1) % 4;
        if (d < n * n - 1) f(x + p[c], y + q[c], d + 1);
    };
    f(0, 0, 1);
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cout << (v[i][j] == -1 ? "T" : to_string(v[i][j])) << (j == n - 1 ? '\n' : ' ');
}



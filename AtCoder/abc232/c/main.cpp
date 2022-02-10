#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<bool>> a(n, vector<bool>(n, false)), b(n, vector<bool>(n, false));
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        x--; y--;
        a[x][y] = a[y][x] = true;
    }
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        x--; y--;
        b[x][y] = b[y][x] = true;
    }
    bool ans = false;
    vector<int> z(n, 0);
    iota(z.begin(), z.end(), 0);
    do {
        bool tmp = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] != b[z[i]][z[j]]) tmp = false;
            }
        }
        if (tmp) ans = true;
    } while(next_permutation(z.begin(), z.end()));
    cout << (ans ? "Yes" : "No") << endl;
}

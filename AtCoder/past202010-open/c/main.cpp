#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m, '~'));
    int dx[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1}, dy[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> v[i][j];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int cnt = 0;
            for (int k = 0; k < 9; k++) {
                if (0 <= i + dx[k] && i + dx[k] < n && 0 <= j + dy[k] && j + dy[k] < m) {
                    if (v[i + dx[k]][j + dy[k]] == '#') cnt++;
                }
            }
            cout << cnt;
        }
        cout << endl;
    }
}

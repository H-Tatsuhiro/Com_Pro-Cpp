#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(n, '-'));
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        a--, b--;
        v[a][b] = 'o';
        v[b][a] = 'x';
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n - 1) cout << v[i][j] << endl;
            else cout << v[i][j] << " ";
        }
    }
}

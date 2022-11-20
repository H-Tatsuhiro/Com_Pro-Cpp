#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<bool>> G(n, vector<bool>(n, false));
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b, a--, b--;
        G[a][b] = true, G[b][a] = true;
    }
    int cnt = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (G[i][j] && G[j][k] && G[i][k]) cnt++;
            }
        }
    }
    cout << cnt << endl;
}

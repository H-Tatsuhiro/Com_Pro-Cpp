#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> v[i][j];
    int ans = -1;
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        for (int j = 0; j < m; j++) if (v[i][j] == 1) tmp++;
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}

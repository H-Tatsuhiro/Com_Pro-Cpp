#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> a[i][j];
    int ans = 0;
    vector<vector<bool>> v(n, vector<bool>(n, false));
    for (int i = 0; i < m; i++) for (int j = 0; j < n - 1; j++) v[a[i][j] - 1][a[i][j + 1] - 1] = true, v[a[i][j + 1] - 1][a[i][j] - 1] = true;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (i != j && !v[i][j]) ans++;
    cout << ans / 2 << endl;
}



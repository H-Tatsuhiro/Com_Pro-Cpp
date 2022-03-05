#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> a[i][j];
    int m; cin >> m;
    vector<vector<bool>> Map(n + 1, vector<bool>(n + 1, false));
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y, x--, y--, Map[x][y] = true, Map[y][x] = true;
    }
    vector<int> p(n, 0);
    for (int i = 0; i < n; i++) p[i] = i;
    long long int ans = 10e15;
    do {
        bool t = false;
        for (int i = 0; i < n - 1; i++) if (Map[p[i]][p[i + 1]] || Map[p[i + 1]][p[i]]) t = true;
        if (t) continue;
        long long int sum = 0;
        for (int i = 0; i < n; i++) sum += a[p[i]][i];
        ans = min(ans, sum);
    } while (next_permutation(p.begin(), p.end()));
    cout << (ans == 10e15 ? -1 : ans) << endl;
}

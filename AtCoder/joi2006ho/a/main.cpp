#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> v[i][j];
    vector<pair<int, int>> p;
    for (int i = 0; i < m; i++) {
        pair<int, int> q = make_pair(0, -1 * i);
        for (int j = 0; j < n; j++) if (v[j][i]) q.first++;
        p.push_back(q);
    }
    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());
    for (int i = 0; i < m; i++) cout << -1 * p[i].second + 1 << (i == m - 1 ? "\n" : " ");
}

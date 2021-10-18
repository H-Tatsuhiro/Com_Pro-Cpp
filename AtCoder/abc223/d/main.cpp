#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> a(m);
    for (int i = 0; i < m; i++) cin >> a[i].first >> a[i].second;
    vector<int> deg(n, 0);
    vector<vector<int>> G(n);
    for (int i = 0; i < m; i++) {
        a[i].first--, a[i].second--;
        deg[a[i].second]++;
        G[a[i].first].push_back(a[i].second);
    }
    vector<int> v; v.reserve(n);
    priority_queue<int, vector<int>, greater<int>> que;
    for (int i = 0; i < n; i++) if (deg[i] == 0) que.push(i);
    while(!que.empty()) {
        int i = que.top(); que.pop();
        v.push_back(i + 1);
        for (int j: G[i]) {
            deg[j]--;
            if (deg[j] == 0) que.push(j);
        }
    }
    if (v.size() != n) cout << -1 << endl;
    else for (int i = 0; i < n; i++) cout << v[i] << (i == n - 1 ? '\n' : ' ');
}

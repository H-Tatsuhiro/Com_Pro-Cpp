#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> G(n);
    vector<int> deg(n, 0), ans(n, -1);
    for (int i = 0; i < (n - 1) + m; i++) {
        int a, b; cin >> a >> b;
        a--, b--;
        deg[b]++;
        G[a].push_back(b);
    }
    priority_queue<int, vector<int>, greater<int>> que;
    for (int i = 0; i < n; i++) if (!deg[i]) que.push(i);
    vector<int> v; v.reserve(n);
    while(!que.empty()) {
        int i = que.top(); que.pop();
        v.push_back(i);
        for (int j: G[i]) {
            deg[j]--;
            if (!deg[j]) que.push(j);
            ans[j] = i;
        }
    }
    for (int i = 0; i < n; i++) cout << ans[i] + 1 << endl;
}

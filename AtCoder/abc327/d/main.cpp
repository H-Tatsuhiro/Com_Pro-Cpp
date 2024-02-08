#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> G(n);
    vector<int> a(m, 0), b(m, 0);
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < m; ++i) {
        int c = a[i] - 1, d = b[i] - 1;
        G[c].push_back(d), G[d].push_back(c);
    }
    bool t = true;
    vector<int> dist(n, -1);
    queue<int> que;
    for (int i = 0; i < n; ++i) {
        if (dist[i] != -1) continue;
        dist[i] = 0, que.push(i);
        while (!que.empty()) {
            int v = que.front(); que.pop();
            for (auto nv : G[v]) {
                if (dist[nv] == -1) {
                    dist[nv] = abs(dist[v] - 1);
                    que.push(nv);
                }
                else {
                    if (v != nv && dist[v] == dist[nv]) t = false;
                    else if (v == nv) t = false;
                    else continue;
                }
            }
        }
    }
    cout << (t ? "Yes" : "No") << endl;
}



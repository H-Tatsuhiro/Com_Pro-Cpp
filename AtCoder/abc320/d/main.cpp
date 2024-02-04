#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    long long int inf = 9223372036854775807;
    vector<pair<long long int, long long int>> pos(n, make_pair(inf, inf));
    pos[0].first = 0, pos[0].second = 0;
    vector<vector<pair<int, pair<long long int, long long int>>>> G(n);
    for (int i = 0; i < m; i++) {
        long long int a, b, c, d; cin >> a >> b >> c >> d;
        G[a - 1].push_back(make_pair(b - 1, make_pair(c, d)));
        G[b - 1].push_back(make_pair(a - 1, make_pair(-1 * c, -1 * d)));
    }
    queue<int> que;
    que.push(0);
    while (!que.empty()) {
        int v = que.front();
        que.pop();
        for (auto nv: G[v]) {
            if (pos[nv.first].first != inf) continue;
            pos[nv.first].first = pos[v].first + nv.second.first, pos[nv.first].second = pos[v].second + nv.second.second;
            que.push(nv.first);
        }
    }
    for (int i = 0; i < n; i++) {
        if (pos[i].first == inf) cout << "undecidable" << endl;
        else cout << pos[i].first << ' ' << pos[i].second << endl;
    }

}
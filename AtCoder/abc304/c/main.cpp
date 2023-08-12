#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
int main() {
    int n; long double d; cin >> n >> d;
    vector<bool> ans(n, false);
    vector<pair<long double, long double>> v(n, make_pair(0, 0));
    vector<vector<int>> G(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            long double c = sqrt(pow(v[i].first - v[j].first, 2) + pow(v[i].second - v[j].second, 2));
            if (c <= d) G[i].push_back(j), G[j].push_back(i);
        }
    }
    function<void(int)> f = [&](int i){
        ans[i] = true;
        vector<int> g;
        for (int j = 0; j < G[i].size(); j++) g.push_back(G[i][j]);
        G[i].clear();
        for (int j = 0; j < g.size(); j++) f(g[j]);
    };
    f(0);
    for (bool t: ans) cout << (t ? "Yes" : "No") << endl;
}



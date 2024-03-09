#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    unordered_map<int, pair<int, int>> Map;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) {
        if (i == 0 && i == n - 1) Map[10000000].second = v[i], Map[v[i]].first = 10000000, Map[v[i]].second = 10000001, Map[10000001].first = v[i];
        else if (i == 0) Map[10000000].second = v[i], Map[v[i]].first = 10000000, Map[v[i]].second = v[i + 1];
        else if (i == n - 1) Map[v[i]].first = v[i - 1], Map[v[i]].second = 10000001, Map[10000001].first = v[i];
        else Map[v[i]].first = v[i - 1], Map[v[i]].second = v[i + 1];
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int c; cin >> c;
        if (c == 1) {
            int x, y; cin >> x >> y;
            int bef_nx = Map[x].second;
            Map[bef_nx].first = y, Map[x].second = y;
            Map[y].first = x, Map[y].second = bef_nx;
        }
        else {
            int x; cin >> x;
            int bef_fr = Map[x].first, bef_bc = Map[x].second;
            Map[bef_fr].second = bef_bc;
            Map[bef_bc].first = bef_fr;
        }
    }
    vector<int> ans;
    int val = Map[10000000].second;
    while (val != 10000001) {
        ans.push_back(val);
        val = Map[val].second;
    }
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
}



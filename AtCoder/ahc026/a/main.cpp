#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> b(m, vector<int>(n / m, 0));
    for (int i = 0; i < m; i++) for (int j = 0; j < n / m; j++) cin >> b[i][j];
    vector<pair<int, int>> ans;
    function<pair<int, int>(int)> search_box = [&](int t){
        for (int i = 0; i < m; i++) for (int j = 0; j < b[i].size(); j++) if (t == b[i][j]) return make_pair(i, j);
    };
    function<int(int)> search_min_hill = [&](int t){
        vector<pair<int, int>> v;
        for (int i = 0; i < m; i++) v.emplace_back(b[i].size(), i);
        sort(v.begin(), v.end());
        return (v[0].second == t ? v[1].second : v[0].second);
    };
    function<void(pair<int, int>)> move_boxes = [&](pair<int, int> p){
        int x = p.first, y = p.second;
        int to = search_min_hill(x);
        int last = b[x].size() - 1;
        if (y != last) {
            vector<int> tmp;
            for (int i = y + 1; i <= last; i++) tmp.push_back(b[x][i]);
            int t = tmp[0];
            for (int i = y + 1; i <= last; i++) b[x].pop_back();
            for (int i = 0; i < tmp.size(); i++) b[to].push_back(tmp[i]);
            ans.emplace_back(t, to + 1);
        }
    };
    function<void(int, int)> pickup_box = [&](int s, int t){
        int last = b[t].size() - 1;
        if (s == b[t][last]) b[t].pop_back(), ans.emplace_back(s, 0);
    };
    for (int i = 1; i <= n; i++) {
        auto v = search_box(i);
        move_boxes(v);
        pickup_box(i, v.first);
    }
    for (int i = 0; i < ans.size(); i++) cout << ans[i].first << " " << ans[i].second << endl;
}



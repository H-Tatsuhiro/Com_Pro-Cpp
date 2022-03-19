#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> q(m, make_pair(0, 0));
    vector<vector<int>> v(n);
    for (int i = 0; i < m; i++) {
        int p, y; cin >> p >> y;
        q[i].first = p, q[i].second = y;
        v[p - 1].push_back(y);
    }
    vector<vector<int>> w = v;
    for (int i = 0; i < n; i++) sort(w[i].begin(), w[i].end()), w[i].erase(unique(w[i].begin(), w[i].end()), w[i].end());
    for (int i = 0; i < m; i++) {
        auto it = lower_bound(w[q[i].first - 1].begin(), w[q[i].first - 1].end(), q[i].second) - w[q[i].first - 1].begin() + 1;
        string s = to_string(q[i].first), t = to_string(it);
        for (int j = 0; j < 6 - s.length(); j++) cout << 0;
        cout << s;
        for (int j = 0; j < 6 - t.length(); j++) cout << 0;
        cout << t << endl;
    }
}

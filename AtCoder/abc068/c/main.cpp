#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> v(m);
    unordered_map<int, bool> Map;
    for (int i = 0; i < m; i++) {
        cin >> v[i].first >> v[i].second;
        if (v[i].first == 1) Map[v[i].second] = true;
    }
    for (int i = 0; i < m; i++) {
        if (Map[v[i].first] && v[i].second == n) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}

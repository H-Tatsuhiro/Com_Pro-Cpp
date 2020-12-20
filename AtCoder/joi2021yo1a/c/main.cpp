#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> ans;
    unordered_map<int, pair<bool, bool>> Map;
    for (int i = 0; i < n; i++) {
        int x; cin >> x; Map[x].first = true;
    }
    for (int i = 0; i < m; i++) {
        int x; cin >> x; Map[x].second = true;
    }
    for (int i = 1; i <= 100; i++) if (Map[i].first == true && Map[i].second == true) ans.push_back(i);
    for (auto i : ans) cout << i << endl;
}

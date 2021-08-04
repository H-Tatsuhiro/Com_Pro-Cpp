#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    unordered_map<int, bool> Map_x, Map_y;
    vector<int> a(n, 0), b(m, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        Map_x[a[i]] = true;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        Map_y[b[i]] = true;
    }
    vector<int> ans;
    for (int i = 1; i <= 10e3; i++) if (Map_x[i] != Map_y[i]) ans.push_back(i);
    for (int i = 0; i < ans.size(); i++) {
        if (i == ans.size() - 1) cout << ans[i] << endl;
        else cout << ans[i] << " ";
    }
}

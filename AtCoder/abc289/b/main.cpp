#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m, p; cin >> n >> m;
    unordered_map<int, bool> Map;
    for (int i = 0; i < m; i++) cin >> p, Map[p - 1] = true;
    vector<int> ans, a;
    bool t = false;
    for (int i = 0; i < n; i++) {
        a.push_back(i + 1);
        if (!Map[i]) {
            if (t) reverse(a.begin(), a.end()), t = false;
            for (int i = 0; i < a.size(); i++) ans.push_back(a[i]);
            a.clear();
        }
        else t = true;
    }
    for (int i = 0; i < n; i++) cout << ans[i] << (i == n - 1 ? '\n' : ' ');
}



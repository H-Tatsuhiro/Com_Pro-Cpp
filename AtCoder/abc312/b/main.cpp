#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    vector<pair<int, int>> ans;
    vector<string> x = {"###.", "###.", "###.", "...."}, y = {"....", ".###", ".###", ".###"};
    for (int i = 0; i < n - 8; i++) {
        for (int j = 0; j < m - 8; j++) {
            vector<string> a(4, ""), b(4, "");
            for (int k = 0; k < 4; k++) for (int l = 0; l < 4; l++) a[k].push_back(s[i + k][j + l]), b[k].push_back(s[i + 5 + k][j + 5 + l]);
            if (a == x && b == y) ans.emplace_back(i + 1, j + 1);
        }
    }
    sort(ans.begin(), ans.end());
    for (auto &p : ans) cout << p.first << ' ' << p.second << endl;
}



#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    k--;
    vector<vector<int>> p(n, vector<int>(3, 0));
    for (int i = 0; i < n; i++) for (int j = 0; j < 3; j++) cin >> p[i][j];
    vector<bool> ans(n, false);
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) v[i] = p[i][0] + p[i][1] + p[i][2];
    vector<int> vv = v;
    sort(vv.begin(), vv.end());
    reverse(vv.begin(), vv.end());
    for (int i = 0; i < n; i++) {
        int score = v[i] + 300;
        if (score >= vv[k]) ans[i] = true;
    }
    for (auto x : ans) cout << (x ? "Yes" : "No") << endl;
}

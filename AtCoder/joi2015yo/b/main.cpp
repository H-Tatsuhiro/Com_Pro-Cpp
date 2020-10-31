#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int m; cin >> m;
    vector<int> a(m, 0);
    for (int i = 0; i < m; i++) cin >> a[i];
    vector<vector<int>> b(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> b[i][j];
    vector<int> ans(n, 0);
    for (int i = 0; i < m; i++) {
        int target = a[i] - 1, cnt = 0;
        for (int j = 0; j < n; j++) {
            if (target == b[i][j] - 1) ans[j]++;
            else cnt++;
        }
        if (cnt > 0) ans[target] += cnt;
    }
    for (int i = 0; i < n; i++) cout << ans[i] << endl;
}

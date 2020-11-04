#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> ans(2 * n + 1, 0);
    for (int i = 1; i <= 2 * n; i++) ans[i] = i;
    for (int i = 0; i < m; i++) {
        int a; cin >> a;
        if (a == 0) {
            vector<int> b, c;
            for (int j = 1; j <= 2 * n; j++) {
                if (j <= n) b.push_back(ans[j]);
                else c.push_back(ans[j]);
            }
            ans = vector<int>(); ans.push_back(0);
            for (int j = 0; j < n; j++) ans.push_back(b[j]), ans.push_back(c[j]);
        }
        else {
            vector<int> b, c;
            for (int j = 1; j <= 2 * n; j++) {
                if (j <= a) b.push_back(ans[j]);
                else c.push_back(ans[j]);
            }
            ans = vector<int>(); ans.push_back(0);
            for (int j = 0; j < c.size(); j++) ans.push_back(c[j]);
            for (int j = 0; j < b.size(); j++) ans.push_back(b[j]);

        }
    }
    for (int i = 1; i <= 2 * n; i++) cout << ans[i] << endl;
}

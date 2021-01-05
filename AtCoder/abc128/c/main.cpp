#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int ans = 0;
    vector<int> k(m, 0);
    vector<vector<int>> s(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        cin >> k[i];
        for (int j = 0; j < k[i]; j++) cin >> s[i][j];
    }
    vector<int> p(m, 0);
    for (int i = 0; i < m; i++) cin >> p[i];
    for (int bit = 0; bit < (1 << n); bit++) {
        vector<bool> check(m, false);
        for (int i = 0; i < m; i++) {
            int cnt = 0;
            for (int j = 0; j < k[i]; j++) if (bit & (1 << (s[i][j] - 1))) cnt++;
            if (cnt % 2 == p[i]) check[i] = true;
        }
        bool judge = false;
        for (int i = 0; i < m; i++) if (!check[i]) judge = true;
        if (!judge) ans++;
    }
    cout << ans << endl;
}

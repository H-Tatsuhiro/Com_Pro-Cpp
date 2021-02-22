#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m, k; cin >> n >> m;
    vector<pair<int, int>> a(m, make_pair(0, 0));
    for (int i = 0; i < m; i++) cin >> a[i].first >> a[i].second;
    cin >> k;
    vector<vector<int>> c(k, vector<int>(2, 0));
    for (int i = 0; i < k; i++) cin >> c[i][0] >> c[i][1];
    int ans = -1;
    for (int bit = 0; bit < (1 << k); bit++) {
        vector<int> cnt(n + 1, 0);
        int tmp = 0;
        for (int i = 0; i < k; i++) {
            if (bit & (1 << i)) cnt[c[i][1]]++;
            else cnt[c[i][0]]++;
        }
        for (int i = 0; i < m; i++) if (cnt[a[i].first] > 0 && cnt[a[i].second] > 0) tmp++;
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}

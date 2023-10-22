#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n, 0);
    for (int i = 0; i < m; i++) cin >> a[i];
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    vector<int> ans(n, 0), cnt(n, 0);
    for (int i = 0; i < n; i++) cnt[i] += i + 1;
    vector<vector<int>> p(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] == 'o') cnt[i] += a[j];
            else p[i].push_back(a[j]);
        }
        sort(p[i].begin(), p[i].end());
        reverse(p[i].begin(), p[i].end());
    }
    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = 0; j < n; j++) if (i != j) x = max(x, cnt[j]);
        int y = cnt[i], k = 0;
        while (y < x) {
            y += p[i][k];
            k++, ans[i]++;
        }
    }
    for (int i = 0; i < n; i++) cout << ans[i] << endl;
}



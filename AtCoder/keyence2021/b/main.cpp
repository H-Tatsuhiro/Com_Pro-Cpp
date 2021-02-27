#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, k, m = 0, cnt = 0; cin >> n >> k;
    vector<int> a(n, 0), ans(k, 0);
    unordered_map<int, int> Map;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; Map[a[i]]++, m = max(m, a[i]);
    }
    int p = k;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j < p; j++) {
            if (Map[i] > 0 && ans[j] == i) ans[j]++, Map[i]--;
            else {
                cnt++, p--;
                break;
            }
        }
        if (cnt == k) break;
    }
    long long int res = 0;
    for (auto x : ans) res += x;
    cout << res << endl;
}

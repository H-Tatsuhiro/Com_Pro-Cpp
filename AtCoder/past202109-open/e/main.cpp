#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> c(n, 0), v(n, 0);
    vector<pair<int, int>> p(n);
    unordered_map<int, bool> Map;
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) p[i] = make_pair(v[i], c[i]);
    sort(p.begin(), p.end());
    long long int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (!Map[p[i].second]) {
            cnt++, Map[p[i].second] = true;
            ans += p[i].first;
        }
        if (cnt == k) break;
    }
    if (cnt == k) cout << ans << endl;
    else cout << -1 << endl;
}

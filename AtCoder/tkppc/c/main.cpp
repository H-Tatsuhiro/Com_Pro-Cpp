#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m, s; cin >> n >> m >> s;
    vector<pair<int, int>> p(n, make_pair(0, 0));
    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
    long long int ans = 0, now = 0;
    sort(p.begin(), p.end());
    if (now >= m) ans += p[0].first;
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            now += p[i].second;
            if (now >= m) ans += s - p[i].first;
        }
        else {
            now += p[i].second;
            if (now >= m) ans += p[i + 1].first - p[i].first;
        }
    }
    cout << ans << endl;
}

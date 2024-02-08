#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<int, int>> v(n, make_pair(0, 0));
    for (auto &p: v) cin >> p.first >> p.second;
    int ans = 0;
    for (int i = 0; i <= 23; i++) {
        int tmp = 0;
        for (int j = 0; j < n; j++) {
            int s = (i + v[j].second) % 24;
            if (9 <= s && s + 1 <= 18) tmp += v[j].first;
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}
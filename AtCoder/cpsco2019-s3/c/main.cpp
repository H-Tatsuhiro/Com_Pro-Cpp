#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<int, int>> v(n, make_pair(0, 0));
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    int ans = 0, maxx = v[0].second;
    v.emplace_back(10e6 + 1, 10e6 + 2);
    for (int i = 0; i < n + 1; i++) {
        if (v[i].first <= maxx) {
            if (v[i].second > maxx) maxx = v[i].second;
        }
        else ans++, maxx = v[i].second;
    }
    cout << ans << endl;
}

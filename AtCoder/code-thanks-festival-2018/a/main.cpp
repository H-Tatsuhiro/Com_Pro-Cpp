#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int t, a, b, c, d; cin >> t >> a >> b >> c >> d;
    vector<pair<int, int>> v;
    v.push_back(make_pair(a, b)), v.push_back(make_pair(c, d)), v.push_back(make_pair(a + c, b + d));
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        if (v[i].first <= t) ans = max(ans, v[i].second);
    }
    cout << ans << endl;
}

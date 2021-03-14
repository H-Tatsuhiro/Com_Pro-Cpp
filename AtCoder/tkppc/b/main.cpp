#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<int, int>> p(n, make_pair(0, 0));
    for (int i = 0; i < n; i++) {
        cin >> p[i].first;
        p[i].second = i + 1;
    }
    sort(p.begin(), p.end());
    int q = p[n - 1].first;
    int ans = 1000001;
    for (int i = n - 1; ; i--) {
        if (p[i].first != q) break;
        ans = min(ans, p[i].second);
    }
    cout << ans << endl;
}

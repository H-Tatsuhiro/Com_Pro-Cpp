#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        auto it = upper_bound(a.begin(), a.end(), a[i] - m);
        int d = distance(it, a.begin() + i) + 1;
        ans = max(ans, d);
    }
    cout << ans << endl;
}



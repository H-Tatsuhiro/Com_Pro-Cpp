#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector b = a;
    b.erase(unique(b.begin(), b.end()), b.end());
    int x = 10e6, y = 0;
    for (int i = 0; i < b.size(); i++) {
        auto p = lower_bound(a.begin(), a.end(), b[i]), q = lower_bound(a.begin(), a.end(), b[i] + 1);
        x = min(x, (int)distance(p, q)), y = max(y, (int)distance(p, q));
    }
    if (b.size() != m) x = 0;
    cout << x << ' ' << y << endl;
}

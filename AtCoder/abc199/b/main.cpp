#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int x = -1, y = 1001;
    for (int i = 0; i < n; i++) x = max(a[i], x);
    for (int i = 0; i < n; i++) y = min(b[i], y);
    int ans = 0;
    if (x <= y) ans = y - x + 1;
    cout << ans << endl;
}

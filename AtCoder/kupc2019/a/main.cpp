#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x; cin >> n >> x;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) if (a[i] + x >= a[n - 1]) ans++;
    cout << ans << endl;
}

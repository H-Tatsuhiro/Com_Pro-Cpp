#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<int> sum(n + 1, 0);
    for (int i = 1; i <= n; i++) sum[i] = sum[i - 1] + a[i];
    int ans = 0;
    for (int i = k - 1; i <= n; i++) ans = max(ans, sum[i] - sum[i - k]);
    cout << ans << endl;
}

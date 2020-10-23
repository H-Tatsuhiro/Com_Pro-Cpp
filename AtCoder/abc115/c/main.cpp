#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<long long int> h(n, 0);
    for (int i = 0; i < n; i++) cin >> h[i];
    sort(h.begin(), h.end());
    long long int ans = h[n - 1];
    for (int i = 0; i <= n - k; i++) ans = min(h[i + k - 1] - h[i], ans);
    cout << ans << endl;
}

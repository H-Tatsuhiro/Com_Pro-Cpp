#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, d; cin >> n >> d;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    long long int ans = 0;
    for (int i = n - 1; i >= 2; i--) {
        auto it = lower_bound(a.begin(), a.end(), a[i] - d) - a.begin(), cnt = ((i - it) * (i - it - 1)) / 2;
        ans += cnt;
    }
    cout << ans << endl;
}

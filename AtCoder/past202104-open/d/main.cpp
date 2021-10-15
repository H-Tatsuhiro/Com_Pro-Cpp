#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int ans = 0;
    for (int i = 0; i < k; i++) ans += a[i];
    cout << ans << endl;
    for (int i = k; i < n; i++) {
        ans -= a[i - k], ans += a[i];
        cout << ans << endl;
    }
}

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
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        if (i > k - 1) ans += a[i] * 2;
        else ans += a[i];
    }
    cout << ans << endl;
}

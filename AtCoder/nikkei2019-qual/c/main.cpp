#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b(n, 0), c(n, 0);
    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        ans -= b[i], c[i] = a[i] + b[i];
    }
    sort(c.begin(), c.end(), greater<int>());
    for (int i = 0; i < n; i += 2) ans += c[i];
    cout << ans << endl;
}

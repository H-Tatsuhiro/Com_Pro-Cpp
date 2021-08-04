#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> a(n, 0);
    long long int sum = 0, m = 0, t = 0;
    vector<long long int> x(n, 0), y(n, 0), z(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        m = max(m, a[i]);
        x[i] = m, z[i + 1] = z[i] + a[i];
        t += z[i + 1], y[i] = t;
    }
    for (int i = 0; i < n; i++) {
        long long int ans = y[i];
        ans += x[i] * (i + 1);
        cout << ans << endl;
    }
}

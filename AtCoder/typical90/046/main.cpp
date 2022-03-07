#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> a(n, 0), b(n, 0), c(n, 0), x(46, 0), y(46, 0), z(46, 0);
    for (int i = 0; i < n; i++) cin >> a[i], a[i] %= 46, x[a[i]]++;
    for (int i = 0; i < n; i++) cin >> b[i], b[i] %= 46, y[b[i]]++;
    for (int i = 0; i < n; i++) cin >> c[i], c[i] %= 46, z[c[i]]++;
    long long int ans = 0;
    for (int i = 0; i < 46; i++) for (int j = 0; j < 46; j++) for (int k = 0; k < 46; k++) if ((i + j + k) % 46 == 0) ans += x[i] * y[j] * z[k];
    cout << ans << endl;
}
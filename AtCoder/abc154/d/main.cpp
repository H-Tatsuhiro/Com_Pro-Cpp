#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    long double ans = 0.0;
    vector<long double> v(n + 1, 0.0);
    for (int i = 1; i <= n; i++) {
        long double p; cin >> p;
        v[i] = (1.0 + p) / 2.0;
    }
    vector<long double> v2(n + 1, 0.0);
    for (int i = 1; i <= n; i++) v2[i] = v[i] + v2[i - 1];
    vector<long double> v3(n + 1, 0.0);
    for (int i = 1; i <= n; i++) {
        if (i >= k) v3[i] = v2[i] - v2[i - k];
        else v3[i] = v2[i];
    }
    for (int i = 1; i <= n; i++) ans = max(ans, v3[i]);
    cout << fixed << setprecision(30) << ans << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long double> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) {
        int t; cin >> t >> a[i] >> b[i];
        t--;
        if (t&1) b[i] -= 0.5;
        if (t&2) a[i] += 0.5;
    }
    long long int ans = 0;
    for (int i = 0; i < n - 1; i++) for (int j = i + 1; j < n; j++) ans += (max(a[i], a[j]) <= min(b[i], b[j]));
    cout << ans << endl;
}

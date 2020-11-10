#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, ans = 0, x = 0;; cin >> n;
    vector<long long int> a(n, 0), p(n, 0), q(n, 0);
    for (long long int i = 0; i < n; i++) cin >> a[i];
    p[0] = a[0], q[0] = max((long long)0, a[0]);
    for (long long int i = 1; i < n; i++) p[i] = p[i - 1] + a[i], q[i] = max(q[i - 1], p[i]);
    for (long long int i = 0; i < n; i++) ans = max(ans, x + q[i]), x += p[i];
    cout << ans << endl;
}

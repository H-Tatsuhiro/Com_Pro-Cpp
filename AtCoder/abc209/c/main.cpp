#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> p(n, -1);
    p[0] = a[0];
    for (int i = 0; i < n - 1; i++) p[i + 1] = a[i + 1] - a[i] - 1 + p[i];
    const long long int MOD = 1000000007;
    long long int ans = p[0];
    for (int i = 1; i < n; i++) ans *= p[i], ans %= MOD;
    cout << ans << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n + 1, 0), q(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    long long int MOD = 1000000007;
    sort(a.begin(), a.end());
    for (int i = 1; i <= n; i++) q[i] = a[i] - a[i - 1];
    long long int ans = 1;
    for (int i = 1; i <= n; i++) ans *= q[i] + 1, ans %= MOD;
    cout << ans << endl;
}

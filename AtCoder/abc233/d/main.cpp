#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; long long int k; cin >> n >> k;
    vector a(n, 0LL), v(n + 1, 0LL);
    for (int i = 0; i < n; i++) cin >> a[i], v[i + 1] = v[i] + a[i];
    unordered_map<long long int, long long int> Map;
    long long int ans = 0;
    for (int i = 1; i <= n; i++) Map[v[i - 1]]++, ans += Map[v[i] - k];
    cout << ans << endl;
}

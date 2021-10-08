#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, k; cin >> n >> k;
    vector<long long int> a(n, 0), ans(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int v = k / n;
    k %= n;
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++) p[i].first = a[i], p[i].second = i;
    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++) {
        ans[p[i].second] = v;
        if (i < k) ans[p[i].second]++;
    }
    for (int i = 0; i < n; i++) cout << ans[i] << endl;
}

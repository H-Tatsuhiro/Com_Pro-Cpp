#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, w; cin >> n >> w;
    vector<long long int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    vector<pair<long long int, long long int>> v(n);
    for (int i = 0; i < n; i++) v[i].first = a[i], v[i].second = b[i];
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += v[i].first * min(w, v[i].second);
        w -= min(w, v[i].second);
    }
    cout << ans << endl;
}

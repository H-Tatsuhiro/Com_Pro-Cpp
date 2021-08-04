#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, k;  cin >> n >> k;
    vector<pair<long long int, long long int>> a(n);
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    long long int ans = 0, bef = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            if (a[i].first == a[i + 1].first) {
                a[i + 1].second += a[i].second;
                continue;
            }
        }
        if (abs(bef - a[i].first) <= k) {
            k -= abs(a[i].first - bef);
            k += a[i].second, bef = a[i].first;
        }
        else break;
    }
    ans = bef;
    if (k > 0) ans += k;
    cout << ans << endl;
}

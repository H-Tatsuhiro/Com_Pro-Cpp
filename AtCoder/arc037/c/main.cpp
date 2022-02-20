#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, k; cin >> n >> k;
    vector<long long int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(b.begin(), b.end());
    function<bool(long long int)> check = [&](long long int x) -> bool {
        long long int cnt = 0;
        for (int i = 0; i < n; i++) cnt += upper_bound(b.begin(), b.end(), x / a[i]) - b.begin();
        return (cnt >= k);
    };
    long long int left = 0, right = 1LL << 60;
    while (right - left > 1) {
        long long int mid = (left + right) / 2;
        if (check(mid)) right = mid;
        else left = mid;
    }
    cout << right << endl;
}

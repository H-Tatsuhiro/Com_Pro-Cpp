#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
    sort(a.begin(), a.end());
    long long int left = 0, right = a[n - 1] + 1;
    while (right - left > 1) {
        long long int mid = (left + right) / 2;
        int cnt = 1, prev = 0;
        for (int i = 0; i < n; i++) if (a[i] - a[prev] >= mid) cnt++, prev = i;
        if (cnt >= m) left = mid;
        else right = mid;
    }
    printf("%lld\n", left);
}

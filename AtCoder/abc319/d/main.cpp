#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<long long int> a(n, 0);
    long long int l = 0, r = 0;
    for (int i = 0; i < n; i++) cin >> a[i], a[i]++, l = max(l, a[i]), r += a[i];
    l--;
    while (r - l > 1) {
        long long int mid = (l + r) / 2, tmp = 0;
        int p = 1;
        for (int i = 0; i < n; i++) {
            tmp += a[i];
            if (tmp > mid) p++, tmp = a[i];
        }
        if (p <= m) r = mid;
        else l = mid;
    }
    cout << r - 1 << endl;
}



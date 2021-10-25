#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    vector<long long int> a(n, 0), c(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        c[i] = a[i] - (i + 1);
    }
    long long int k;
    for (int i = 0; i < q; i++) {
        cin >> k;
        int it = lower_bound(c.begin(), c.end(), k) - c.begin();
        if (it == n) cout << a[n - 1] + (k - c[n - 1]) << endl;
        else cout << a[it] - (c[it] - k + 1) << endl;
    }
}

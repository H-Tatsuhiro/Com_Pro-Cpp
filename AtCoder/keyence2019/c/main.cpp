#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b(n, 0);
    long long int ans = n, sum_a = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum_a += a[i];
    }
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<int> c(n, 0);
    for (int i = 0; i < n; i++) {
        if (sum_a >= b[i]) sum_a -= b[i], c[i] = b[i];
        else {
            cout << -1 << endl;
            return 0;
        }
    }
    vector<long long int> v;
    for (int i = 0; i < n; i++) {
        if (c[i] < a[i]) v.emplace_back(a[i] - c[i]);
        if (c[i] == a[i]) ans--;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) if (sum_a >= v[i]) sum_a -= v[i], ans--;
    cout << ans << endl;
}

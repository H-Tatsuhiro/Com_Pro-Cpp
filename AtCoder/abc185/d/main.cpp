#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, m; cin >> n >> m;
    vector<long long int> a(m, 0), d;
    for (long long int i = 0; i < m; i++) cin >> a[i];
    sort(a.begin(), a.end());
    a.insert(a.begin(), 0), a.push_back(n + 1);
    long long int x = n;
    for (int i = 0; i < a.size() - 1; i++) {
        long long l = a[i + 1] - a[i] - 1;
        if (l > 0) {
             d.push_back(l);
             x = min(x, l);
        }
    }
    long long int ans = 0;
    for (long long int i = 0; i < d.size(); i++) ans += (d[i] + x - 1) / x;
    cout << ans << endl;
}

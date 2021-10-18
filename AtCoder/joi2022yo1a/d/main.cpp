#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n, 0), b(m, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    int ans = 0;
    vector<int> c(2001, 0);
    for (int i = 0; i < n; i++) c[a[i]]++;
    for (int i = 0; i < m; i++) ans += c[b[i]], c[b[i]] = 0;
    cout << ans << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> a(n, 0), b(n, 0), ans(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    long long int m = a[0];
    ans[0] = a[0] * b[0];
    for (int i = 1; i < n; i++) m = max(m, a[i]), ans[i] = max(ans[i - 1], m * b[i]);
    for (int i = 0; i < n; i++) cout << ans[i] << endl;
}

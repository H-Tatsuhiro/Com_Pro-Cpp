#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, bef = -1; cin >> n;
    long long int ans = 0;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> diff;
    for (int i = 0; i < n - 1; i++) diff.push_back(a[i + 1] - a[i]);
    for (int i = 0; i < n - 1; i += 2) ans += diff[i];
    if (n % 2 != 0) cout << "error" << endl;
    else cout << ans << endl;
}

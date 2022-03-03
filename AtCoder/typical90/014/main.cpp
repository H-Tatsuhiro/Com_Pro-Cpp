#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(), a.end()), sort(b.begin(), b.end());
    long long int ans = 0;
    for (int i = 0; i < n; i++) ans += abs(a[i] - b[i]);
    cout << ans << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    long long int ans = a[0];
    for (int i = 0; i < n - 2; i++) ans += a[i / 2 + 1];
    cout << ans << endl;
}

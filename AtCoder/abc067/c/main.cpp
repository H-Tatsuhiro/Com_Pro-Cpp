#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long int> a(n, 0);
    long long int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) x += a[i];
        else y += a[i];
    }
    long long int ans = abs(x - y);
    for (int i = 1; i < n - 1; i++) {
        x += a[i], y -= a[i];
        ans = min(ans, abs(x - y));
    }
    cout << ans << endl;
}
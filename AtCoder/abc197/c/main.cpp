#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int ans = 10000000000;
    for (int bit = 0; bit < (1 << (n - 1)); bit++) {
        long long int xorsum = 0, orsum = 0;
        for (int i = 0; i <= n; i++) {
            if (i < n) orsum |= a[i];
            if (i == n || (bit & (1 << i))) xorsum ^= orsum, orsum = 0;
        }
        ans = min(ans, xorsum);
    }
    cout << ans<< endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int q, h, s, d, n; cin >> q >> h >> s >> d >> n;
    long long int ans = 0, l2_025 = q * 8, l2_05 = h * 4, l2_1 = s * 2, l1_025 = q * 4, l1_05 = h * 2;
    int u = n / 2;
    long long int p = min(l2_1, min(l2_025, min(l2_05, d)));
    ans += p * u;
    n %= 2;
    p = min(l1_025, min(l1_05, s));
    ans += p * n;
    cout << ans << endl;
}

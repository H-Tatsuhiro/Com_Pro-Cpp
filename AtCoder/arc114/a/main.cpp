#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    long long int ans = 10e17;
    for (int i = 0; i < (1 << 15); i++) {
        long long int tmp = 1;
        for (int j = 0; j < 15; j++) if (i >> j & 1) tmp *= prime[j];
        bool t = true;
        for (int j = 0; j < n; j++) if (gcd(tmp, a[j]) == 1) t = false;
        ans = (t ? min(ans, tmp) : ans);
    }
    cout << ans << endl;
}

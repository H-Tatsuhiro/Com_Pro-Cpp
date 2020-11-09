#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, k, ans = 0; cin >> n >> k;
    for (long long int i = k; i <= n + 1; i++) {
        long long int a = i * (i - 1) / 2, b = (2 * n - i + 1) * i / 2, c = b - a + 1;
        ans = (ans + c) % 1000000007;
    }
    cout << ans << endl;
}

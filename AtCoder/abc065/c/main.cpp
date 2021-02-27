#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    long long int ans = 1;
    if (n < m) swap(n, m);
    if (n - m > 1) {
        cout << 0 << endl;
        return 0;
    }
    if (n == m) ans = 2;
    while(n >= 1) {
        ans = (ans * n) % 1000000007, n--;
        if (m >= 1) ans = (ans * m) % 1000000007, m--;
    }
    cout << ans << endl;
    return 0;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, m; cin >> n >> m;
    if (n > m) swap(n, m);
    long long int ans = 0;
    if (n == 1) {
        if (m == 1) ans = 1;
        else ans = m - 2;
    }
    else ans = (n - 2) * (m - 2);
    cout << ans << endl;
}

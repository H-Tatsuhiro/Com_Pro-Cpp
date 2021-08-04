#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a, x, y; cin >> n >> a >> x >> y;
    long long int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (i > a) ans += y;
        else ans += x;
    }
    cout << ans << endl;
}

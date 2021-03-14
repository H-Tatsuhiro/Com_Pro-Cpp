#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x, m = -1, ans = 0; cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        m = max(m, b), ans += a * b;
    }
    cout << ans + m * x << endl;
}

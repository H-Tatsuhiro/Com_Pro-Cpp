#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    long double cnt = 0.0;
    for (int i = 1; i <= n; i++) {
        int tmp = i, x = 0;
        while (tmp < k) {
            tmp *= 2;
            x++;
        }
        cnt += powf(0.5, x);
    }
    long double ans = cnt / (n * 1.0);
    cout << fixed << setprecision(30) << ans << endl;
}

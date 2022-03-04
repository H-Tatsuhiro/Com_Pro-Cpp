#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, a, b, c, ans = 10e6; cin >> n >> a >> b >> c;
    for (int i = 0; i <= 9999; i++) {
        for (int j = 0; j <= 9999; j++) {
            long long int k = n - i * a - j * b;
            if (k >= 0 && k % c == 0) ans = min(ans, i + j + k / c);
        }
    }
    cout << ans << endl;
}

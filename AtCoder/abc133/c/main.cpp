#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int l, r, ans = 4000;; cin >> l >> r;
    for (long long int i = l; i <= r - 1; i++) {
        for (long long int j = i + 1; j <= r; j++) {
            if (ans > (i * j) % 2019) ans = (i * j) % 2019;
            if (!ans) {
                cout << ans << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

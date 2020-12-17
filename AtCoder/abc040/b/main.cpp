#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int ans = 10e6;
    for (int i = 1; i <= sqrt(n); i++) {
        int j = n / i;
        ans = min(ans, abs(i - j) + (n - i * j));
    }
    cout << ans << endl;
}

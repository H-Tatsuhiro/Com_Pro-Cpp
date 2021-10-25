#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, b, n; cin >> a >> b >> n;
    long long int ans = (a * n) / b -  a * (n / b);
    if (b - 1 <= n) ans = max(ans, (a * (b - 1)) / b - a * ((b - 1) / b));
    cout << ans << endl;
}

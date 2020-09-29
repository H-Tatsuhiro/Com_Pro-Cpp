#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n; cin >> n;
    long double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
        long double tmp = (1.0 * a + b + c + d) + (long double)(e * 110.0 / 900.0);
        sum = max(sum, tmp);
    }
    cout << setprecision(20) << sum << endl;
}

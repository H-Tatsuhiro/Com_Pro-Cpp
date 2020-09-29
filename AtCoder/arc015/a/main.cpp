#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    long double n; cin >> n;
    long double ans = (9.0 / 5.0 * n) + 32;
    cout << setprecision(10) << ans << endl;
}

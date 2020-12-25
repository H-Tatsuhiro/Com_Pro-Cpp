#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
cpp_int Combination(int n, int r) {
    cpp_int u = 1, d = 1;
    for (int i = 2; i <= n; i++) {
        u *= i;
        if (i <= n - r) d *= i;
    }
    for (int i = 2; i <= r; i++) d *= i;
    return u / d;
}
int main() {
    int l; cin >> l;
    cpp_int ans = Combination(l - 1, 11);
    cout << ans << endl;
}

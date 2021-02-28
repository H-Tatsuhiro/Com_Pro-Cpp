#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int x, k, d; cin >> x >> k >> d;
    if (x < 0) x *= -1;
    cpp_int a = min(x / d, k);
    k -= a, x -= a * d;
    if (k % 2 == 0) cout << x << endl;
    else cout << abs(x - d) << endl;
}

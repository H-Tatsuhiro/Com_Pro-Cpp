#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
cpp_int power_fm(cpp_int a, cpp_int n, cpp_int m) {
    cpp_int ret = 1;
    while (n > 0) {
        if (n & 1) ret = ret * a % m;
        a = a * a % m;
        n >>= 1;
    }
    return ret;
}
int main() {
    cpp_int x, y, z; cin >> x >> y >> z;
    cout << power_fm(x, z, y) << endl;
}

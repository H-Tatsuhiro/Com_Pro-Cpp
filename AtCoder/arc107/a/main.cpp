#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int a, b, c; cin >> a >> b >> c;

    cout << (a * b * c * (a + 1) * (b + 1) * (c + 1) / 8) % 998244353 << endl;
}

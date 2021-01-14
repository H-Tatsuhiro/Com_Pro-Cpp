#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int a, b, c, d; cin >> a >> b >> c >> d;
    cpp_int x = (b / d) + (b / c) - (b / lcm(c, d)), y = ((a - 1) / d) + ((a - 1) / c) - ((a - 1) / lcm(c, d));
    cout << (b - a + 1) - (x - y) << endl;
}

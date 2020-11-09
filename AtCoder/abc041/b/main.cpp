#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int a, b, c; cin >> a >> b >> c;
    cpp_int ans = a * b * c;
    cout << ans % 1000000007 << endl;
}

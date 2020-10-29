#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    long long int a, b, c; cin >> a >> b >> c;
    cpp_int k; cin >> k;
    if (k % 2 == 0) cout << a - b << endl;
    else cout << b - a << endl;
}

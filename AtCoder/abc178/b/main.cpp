#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
namespace np = boost::multiprecision;
using Booint = np::cpp_int;
using namespace std;
int main() {
    Booint a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a >= 0 && b >= 0) {
        if (c >= 0 && d >= 0) cout << b * d << endl;
        else if (c <= 0 && d >= 0) cout << b * d << endl;
        else cout << a * d << endl;
    }
    else if (a <= 0 && b >= 0) {
        if (c >= 0 && d >= 0) cout << b * d << endl;
        else if (c <= 0 && d >= 0) cout << max(b * d, a * c) << endl;
        else cout << a * c << endl;
    }
    else {
        if (c >= 0 && d >= 0) cout << b * c << endl;
        else if (c <= 0 && d >= 0) cout << a * c << endl;
        else cout << a * c << endl;
    }
}

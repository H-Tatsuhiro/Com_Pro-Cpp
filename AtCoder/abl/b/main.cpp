#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using Booint = mp::cpp_int;
using namespace std;
int main() {
    Booint a;
    Booint b;
    Booint c;
    Booint d;
    cin >> a >> b >> c >> d;
    if ((a <= c && c <= b) || (c <= a && a <= d)) {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
}

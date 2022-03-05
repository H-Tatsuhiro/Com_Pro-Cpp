#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
template<class T> T gcd(T a, T b) {
    if(a < b) {
        return gcd(b, a);
    }
    T r;
    while ((r=a%b)) {
        a = b;
        b = r;
    }
    return b;
}
int main() {
    cpp_int a, b; cin >> a >> b;
    cpp_int d = gcd(a, b), m = 1000000000000000000;
    cpp_int ans = a / d * b;
    if (ans > m) cout << "Large" << endl;
    else cout << a / d * b << endl;
}

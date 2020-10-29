#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int a, b = 0, ans = 0; cin >> a;
    while(a > 1) {
        a /= 2, b++;
    }
    for (int i = 0; i <= b; i++) ans += (cpp_int)pow(2, i);
    cout << ans << endl;
}

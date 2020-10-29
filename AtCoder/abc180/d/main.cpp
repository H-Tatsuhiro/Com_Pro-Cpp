#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
int main() {
    cpp_int x, y, a, b, cnt = 0; cin >> x >> y >> a >> b;
    if (y - x < b) {
        cout << 0 << endl;
        return 0;
    }
    while (x < b) {
        if (x * a >= b) break;
        else {
            x *= a;
            cnt++;
        }
    }
    cout << ((y - 1) - x) / b + cnt << endl;
    return 0;
}
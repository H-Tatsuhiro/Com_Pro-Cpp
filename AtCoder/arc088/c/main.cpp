#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int x, y, cnt = 1; cin >> x >> y;
    while(true) {
        if (x * 2 > y) break;
        else {
            cnt++;
            x *= 2;
        }
    }
    cout << cnt << endl;
}

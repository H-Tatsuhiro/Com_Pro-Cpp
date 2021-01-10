#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int a, k; cin >> a >> k;
    if (k == 0) cout << (cpp_int)(2000000000000) - a << endl;
    else {
        cpp_int sum = a, cnt = 0;
        while ((cpp_int)(2000000000000) > sum) {
            cnt++;
            sum += 1 + (k * sum);
        }
        cout << cnt << endl;
    }
}

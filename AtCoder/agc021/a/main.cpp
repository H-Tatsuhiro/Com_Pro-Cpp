#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int n, m; cin >> n;
    long long int cnt = 0;
    m = n;
    while (m > 0) {
        m /= 10;
        cnt++;
    }
    cpp_int com = (cpp_int)pow(10, cnt) - 1, c = (cpp_int)pow(10, cnt - 1), ans = 0;

    while(true) {
        if (n < com) com -= c;
        else break;
    }
    while (com > 0) {
        ans += (com % 10);
        com /= 10;
    }
    cout << ans << endl;
}

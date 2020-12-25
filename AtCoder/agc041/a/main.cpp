#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int n, a, b; cin >> n >> a >> b;
    if ((b - a) % 2 == 0) cout << (b - a) / 2 << endl;
    else cout << min((a - 1), (n - b)) + 1 + (b - a - 1) / 2 << endl;
}

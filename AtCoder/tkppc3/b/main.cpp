#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int n; cin >> n;
    if (n % 6 == 0) cout << "yES" << endl;
    else cout << "nO" << endl;
    if (n % 11 == 0) cout << "yES" << endl;
    else cout << "nO" << endl;
}

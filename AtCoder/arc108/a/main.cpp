#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int s, p; cin >> s >> p;
    for (cpp_int i = 1; i <= sqrt(p); i++) {
        if (p % i == 0) {
            if (i + p / i == s) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

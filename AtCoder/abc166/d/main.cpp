#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int x; cin >> x;
    for (int i = -118; i <= 119; i++) {
        for (int j = -119; j <= 118; j++) {
            if (i * i * i * i * i - j * j * j * j * j == x) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
}

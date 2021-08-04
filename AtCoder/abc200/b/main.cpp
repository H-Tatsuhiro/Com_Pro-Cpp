#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    cpp_int n;
    long long int k; cin >> n >> k;
    for (int i = 0; i < k; i++) {
        if (n % 200 == 0) n /= 200;
        else n *= 1000, n += 200;
    }
    cout << n << endl;
}

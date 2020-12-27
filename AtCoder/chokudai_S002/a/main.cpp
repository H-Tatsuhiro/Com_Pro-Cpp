#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        long long int a, b; cin >> a >> b;
        cout << (cpp_int)(a * b) << endl;
    }
}

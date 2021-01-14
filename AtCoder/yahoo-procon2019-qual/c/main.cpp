#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    unsigned long long int k, a, b, sum = 1, i = 0; cin >> k >> a >> b;
    while (i <= k) {
        if (b - a <= 2) break;
        if (sum < a) {
            unsigned long long int tmp = (a - sum);
            sum += tmp, i += tmp;
        }
        else if (i + 2 <= k) sum += (b - a), i += 2;
        else {
            sum += (k - i);
            break;
        }
    }
    cout << max(1 + k, sum) << endl;
}

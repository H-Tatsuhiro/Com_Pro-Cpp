#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
int main() {
    long long int n; cin >> n;
    long long int ans = 0;
    unordered_map<cpp_int, bool> Map;
    for (long long int i = 2; i * i <= n; i++) {
        cpp_int tmp = i;
        while(tmp <= n) {
            tmp *= i;
            if (tmp <= n) {
                if (Map[tmp]) continue;
                else ans++, Map[tmp] = true;
            }
        }
    }
    cout << n - ans << endl;
}

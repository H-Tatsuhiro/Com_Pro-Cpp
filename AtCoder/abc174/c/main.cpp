#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
template<class T> static inline T gcd(T a, T b) { return a % b == 0 ? b : gcd(b, a % b);}
template<class T> static inline T lcm(T a, T b) { return a / gcd(a, b) * b; }
int main() {
    int k; cin >> k;
    long long int tmp = 7;
    for (long long int i = 1; i <= k; i++) {
        if (i == 1) tmp = tmp % k;
        else tmp = ((10 * tmp) + 7) % k;
        if (tmp == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

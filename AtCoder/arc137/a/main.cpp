#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    long long int l, r; cin >> l >> r;
    for (long long int d = r - l; ; d--) {
        for (long long int i = l; i <= r - d; i++) {
            long long int j = i + d;
            if (gcd(i, j) == 1) {
                cout << d << endl;
                return 0;
            }
        }
    }
}

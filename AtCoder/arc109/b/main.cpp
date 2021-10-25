#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    long long int l = 0, r = 2e9;
    while(r - l > 1) {
        long long int m = (l + r) / 2;
        (m * (m + 1) / 2 <= n + 1 ? l : r) = m;
    }
    cout << n - l + 1 << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    long long int ans = n;
    for (int i = 0; i < 60; i++) {
        long long int p = pow(2, i);
        long long int a = floor(n / p);
        long long int b = n - (a * p);
        ans = min(ans, a + b + i);
    }
    cout << ans << endl;
}

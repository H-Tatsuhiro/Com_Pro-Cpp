#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
long long int gcd(long long int x, long long int y) { return (x % y)? gcd(y, x % y): y; }
long long int lcm(long long int x, long long int y) { return x / gcd(x, y) * y; }
int main() {
    int n, i = 2; cin >> n;
    long long int ans = 1;
    while(i <= n) {
        ans = lcm(ans, i);
        i++;
    }
    ans++;
    cout << ans << endl;
}

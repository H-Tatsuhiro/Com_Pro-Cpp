#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, ans = 0; cin >> n;
    while (n % 2 == 0) n /= 2;
    long long int s = sqrt(n);
    for (long long int i = 1; i <= s; i++) if (n % i == 0) ans += 2;
    if (s * s == n) ans--;
    cout << ans * 2 << endl;
}

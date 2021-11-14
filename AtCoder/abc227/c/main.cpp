#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    long long int ans = 0;
    for (int i = 1; i <= 100000; i++) {
        long long int m = n / i;
        for (int j = i; j <= sqrt(m); j++) {
            long long int x = n / (i * j);
            ans += (x - j + 1);
        }
    }
    cout << ans << endl;
}

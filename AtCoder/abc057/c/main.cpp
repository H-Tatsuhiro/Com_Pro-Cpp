#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    long long int ans = 50;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i == n / i) {
                long long int a = i, cnt = 0;
                while(a > 0) {
                    a /= 10;
                    cnt++;
                }
                ans = min(ans, cnt);
            }
            else {
                long long int a = i, b = n / i, cnt = 0;
                while(a > 0 || b > 0) {
                    a /= 10, b /= 10;
                    cnt++;
                }
                ans = min(ans, cnt);
            }
        }
    }
    cout << ans << endl;
}

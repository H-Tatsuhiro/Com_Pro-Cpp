#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long int d; cin >> d;
    long long int ans = 2 * 1e12;
    for (long long int i = 0; i <= 1e6; i++) {
        long long int p = i * i - d;
        if (p >= 0) ans = min(ans, p);
        else {
            long long int x = floor(sqrt(-p)), y = ceil(sqrt(-p));
            ans = min(ans, min(abs(p + x * x), abs(p + y * y)));
        }
    }
    cout << ans << endl;
}



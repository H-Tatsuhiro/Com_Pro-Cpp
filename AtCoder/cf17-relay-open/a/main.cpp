#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, b, c; cin >> a >> b >> c;
    long long int now = b, ans = 0;
    if (now >= a) ans = 1;
    else {
        if (b - c <= 0) ans = -1;
        else {
            long long int x = a - now, y = b - c;
            if (x % y != 0) ans = 1 + 2 * (x / y + 1);
            else ans = 1 + 2 * (x / y);
        }
    }
    cout << ans << endl;

}

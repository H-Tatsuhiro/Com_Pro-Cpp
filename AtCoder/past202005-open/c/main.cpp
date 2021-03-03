#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, r, n, m = 1000000000; cin >> a >> r >> n;
    long long int x = 1;
    for (int i = 1; i <= n - 1; i++) {
        x *= r;
        if (x > m) {
            cout << "large" << endl;
            return 0;
        }
    }
    long long int y = x * a;
    if (y > m) cout << "large" << endl;
    else cout << y << endl;
    return 0;
}

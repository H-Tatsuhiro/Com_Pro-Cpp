#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, b, c, d; cin >> a >> b >> c >> d;
    long long int x = a, y = 0;
    for (int i = 1; i <= a; i++) {
        x += b, y += c;
        if (x <= d * y) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

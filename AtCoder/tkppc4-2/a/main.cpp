#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x, y; cin >> x >> y;
    if (y % 2 != 0 || y < 0) cout << -1 << endl;
    else {
        if (x < 0) x *= -1;
        if (y >= 2 * x) {
            if (x % 2 != 0) {
                if ((y + 2) % 4 == 0) cout << y / 2 << endl;
                else cout << -1 << endl;
            }
            else {
                if (y % 4 == 0) cout << y / 2 << endl;
                else cout << -1 << endl;
            }
        }
        else cout << -1 << endl;
    }
}

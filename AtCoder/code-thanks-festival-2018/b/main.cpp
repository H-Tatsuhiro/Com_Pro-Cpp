#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x, y; cin >> x >> y;
    if (x > y) swap(x, y);
    int z = y - x;
    if (z % 2 != 0) cout << "No" << endl;
    else {
        x -= z / 2, y -= (z / 2) * 3;
        if (x >= 0 && x == y) {
            if (x % 4 == 0) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else cout << "No" << endl;
    }
}

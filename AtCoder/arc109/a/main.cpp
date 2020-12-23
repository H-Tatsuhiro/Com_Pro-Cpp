#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (2 * c >= d) {
        if (a > b) cout << (abs(a - b) - 1) * d + c << endl;
        else cout << abs(a - b) * d + c << endl;
    }
    else {
        if (a > b) cout << abs(a - b) * c + (abs(a - b) - 1) * c << endl;
        else cout << abs(a - b) * c + (abs(a - b) + 1) * c << endl;
    }
}

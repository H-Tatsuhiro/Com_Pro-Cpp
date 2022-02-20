#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int x; cin >> x;
    if (x >= 0) {
        long long int y = x / 10;
        long long int z = x % 10;
        cout << y << endl;
    }
    else {
        long long int y = x / 10;
        long long int z = (-1 * x) % 10;
        if (z == 0) cout << y << endl;
        else cout << y - 1 << endl;
    }
}

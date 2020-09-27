#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long double h, b; cin >> h >> b;
    h /= 100.0;
    cout << b * h * h << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long double a, b, c; cin >> a >> b >> c;
    long double x = sqrtl(a), y = sqrtl(b), z = sqrtl(c), eps = 1e-12;
    cout << (x + y < z - eps ? "Yes" : "No") << endl;
}

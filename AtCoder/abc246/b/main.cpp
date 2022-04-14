#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    long double c = sqrt(a * a + b * b);
    long double d = 1 / c;
    cout << fixed << setprecision(100) << (long double)(a * d) << ' ' << (long double)(b * d) << endl;
}

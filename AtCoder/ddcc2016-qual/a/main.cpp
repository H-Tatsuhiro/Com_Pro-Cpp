#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    long double a, b, c; cin >> a >> b >> c;
    long double x = c / a;
    cout << fixed << setprecision(10) << x * b << endl;
}

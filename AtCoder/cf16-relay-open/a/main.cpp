#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    long double a, b; cin >> a >> b;
    cout << fixed << setprecision(10) << (a * b * 1.0) / ((a + b) * 1.0) << endl;
}

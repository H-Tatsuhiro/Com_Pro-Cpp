#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
const double PI = 3.1415926535;
int main() {
    int r, d; cin >> r >> d;
    cout << setprecision(10) << (double)(2 * d * PI * r * r * PI) << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    long double h; cin >> h;
    cout << fixed << setprecision(100) << sqrt(h * (12800000 + h)) << endl;
}

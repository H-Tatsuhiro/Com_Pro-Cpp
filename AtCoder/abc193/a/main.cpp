#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    long double a, b; cin >> a >> b;
    cout << fixed << setprecision(10) << (1.0 - (b / a)) * 100 << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    long double ans = (a - b) * 1.0 / 3.0 + b;
    cout << setprecision(10) << ans << endl;
}

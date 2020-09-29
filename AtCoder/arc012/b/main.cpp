#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    long double n, a, b, l; cin >> n >> a >> b >> l;
    long double ans = 0, t = 0, k = 0;
    for (int i = 0; i < n; i++) {
        long double s = (long double)(l / a);
        l = (long double)(s * b);
    }
    cout << setprecision(10) << (float)l << endl;
}

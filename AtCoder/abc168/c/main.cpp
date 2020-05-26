#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
const double PI = acos(-1.0);
using namespace std;
int main() {
    int A, B, H, M;
    cin >> A >> B >> H >> M;
    cout << fixed << setprecision(10);
    long double rad = PI * 2 * (
            (long double)H / 12.0 + ((long double)M / 60.0) / 12.0 -
            (long double)M / 60.0);
    long double ans = (long double)(A * A + B * B) - (long double)(2 * A * B) * cosl(rad);
    cout << sqrtl(ans) << endl;
}

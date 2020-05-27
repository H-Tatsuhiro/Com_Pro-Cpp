#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
int main() {
    long double L;
    cin >> L;
    long double ans = (long double)((L * L * L) / 27);
    cout << fixed << setprecision(8) << ans << endl;
}

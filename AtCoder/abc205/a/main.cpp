#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long double a, b; cin >> a >> b;
    long double ans = ((b * 1.0) / 100) * a * 1.0;
    cout << ans << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    double v, t, s, d; cin >> v >> t >> s >> d;
    if (d / v >= t && d / v <= s) cout << "No" << endl;
    else cout << "Yes" << endl;
}

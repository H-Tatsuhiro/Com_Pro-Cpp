#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long double a, b; cin >> a >> b;
    if ((a + 0.5) - b > 0) cout << 1 << endl;
    else cout << 0 << endl;
}

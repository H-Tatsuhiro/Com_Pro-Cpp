#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    double x = 1.0;
    if (modf(sqrt(n), &x) == 0.0) cout << 0 << endl;
    else cout << pow((int)sqrt(n) + 1, 2) - n << endl;
}

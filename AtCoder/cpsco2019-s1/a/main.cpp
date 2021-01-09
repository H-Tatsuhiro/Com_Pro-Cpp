#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a; cin >> n >> a;
    int x = 0, y = 0, m = n / 3;
    if (a % 3 != 0) x = a / 3 + 1;
    else x = a / 3;
    if (a >= m) y = m;
    else y = a;
    cout << x << " " << y << endl;
}

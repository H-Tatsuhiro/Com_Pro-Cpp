#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << abs(a - c) + 1 + abs(b - d) << endl;
}

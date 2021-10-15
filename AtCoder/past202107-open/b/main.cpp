#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int a, b, c; cin >> a >> b >> c;
    while (a > b * c) { a--; }
    cout << fixed << setprecision(10) << (double)(a * 1.0 / b * 1.0) << endl;
}

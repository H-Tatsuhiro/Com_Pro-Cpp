#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, b, c; cin >> a >> b >> c;
    long long int x = 2 * b - a - c;
    long long int k = (x >= 0 ? 0 : (1 - x) / 2);
    cout << x + 3 * k << endl;
}

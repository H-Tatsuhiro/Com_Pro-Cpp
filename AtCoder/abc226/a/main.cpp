#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long double x; cin >> x;
    int y = x * 1000;
    if (5 <= (y / 100) % 10) cout << (int)x + 1 << endl;
    else cout << (int)x << endl;
}

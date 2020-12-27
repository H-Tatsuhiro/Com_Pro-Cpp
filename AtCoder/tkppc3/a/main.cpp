#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    char a, b; int c, d; cin >> a >> c >> b >> d;
    if (a != b) d *= -1;
    cout << abs(c - d) / 15 << endl;
}

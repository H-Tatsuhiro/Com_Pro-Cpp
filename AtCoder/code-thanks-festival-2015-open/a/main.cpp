#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if ((a >= 1 && b <= -1) || (a <= -1 && b >= 1)) cout << (abs(a) + abs(b)) * 2 << endl;
    else if (a >= 1 && b >= 1) cout << 2 * max(a, b) << endl;
    else cout << 2 * -1 * min(a, b) << endl;
}

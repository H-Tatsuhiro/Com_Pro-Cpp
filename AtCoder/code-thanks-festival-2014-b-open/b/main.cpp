#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c; cin >> a >> b >> c;
    int x = max((a * b) * c, (a + b) + c), y = max((a + b) * c, (a * b) + c);
    cout << max(x, y) << endl;
}

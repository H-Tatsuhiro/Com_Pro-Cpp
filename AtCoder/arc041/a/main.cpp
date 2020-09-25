#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x, y, k; cin >> x >> y >> k;
    if (y >= k) x += k;
    else x += (y - k) + y;
    cout << x << endl;
}

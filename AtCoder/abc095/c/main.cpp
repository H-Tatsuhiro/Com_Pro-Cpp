#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> z;
    int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
    z.push_back(c * 2 * max(x, y));
   if ((a + b) / 2 >= c && x <= y) {
        z.push_back(x * (c * 2) + (y - x) * b);
    }
    else if ((a + b) / 2 >= c && x > y) {
        z.push_back(y * (c * 2) + (x - y) * a);
    }
    z.push_back(a * x + b * y);
    sort(z.begin(),z.end());
    cout << z[0] << endl;
}

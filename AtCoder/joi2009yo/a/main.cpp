#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    for (int i = 0; i < 3; i++) {
        int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
        int t = a * 3600 + b * 60 + c, s = d * 3600 + e * 60 + f;
        int tmp = s - t;
        int x = tmp / 3600;
        tmp %= 3600;
        int y = tmp / 60;
        tmp %= 60;
        cout << x << " " << y << " " << tmp << endl;
    }
}

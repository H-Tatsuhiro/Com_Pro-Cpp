#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x, y, z; cin >> n >> x >> y >> z;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        if (a >= x && b >= y && a + b >= z) cnt++;
    }
    cout << cnt << endl;
}

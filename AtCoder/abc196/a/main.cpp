#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int ans = -1000000;
    for (int i = a; i <= b; i++) {
        for (int j = c; j <= d; j++) {
            ans = max(ans, i - j);
        }
    }
    cout << ans << endl;
}

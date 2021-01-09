#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x; cin >> x;
    int ans = -1;
    while(x > 0) {
        ans = max(ans, x % 10);
        x /= 10;
    }
    cout << ans << endl;
}

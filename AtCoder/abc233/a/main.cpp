#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x, y; cin >> x >> y;
    int ans = 0;
    while(x < y) {
        ans++;
        x += 10;
    }
    cout << ans << endl;
}

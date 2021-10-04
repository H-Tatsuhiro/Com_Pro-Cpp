#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c; cin >> a >> b >> c;
    int d = c;
    int ans = -1;
    for (int i = 1; b >= d * i; i++) {
        if (d * i >= a && d * i <= b) {
            ans = d * i;
            break;
        }
    }
    cout << ans << endl;
}

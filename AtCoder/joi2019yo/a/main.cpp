#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c; cin >> a >> b >> c;
    int ans = 0, cnt = 0, sum = 0;
    while (sum < c) {
        ans++, cnt++;
        if (cnt == 7) {
            sum += b, cnt = 0;
        }
        sum += a;
    }
    cout << ans << endl;
}

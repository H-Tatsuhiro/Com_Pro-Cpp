#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    int ans = 1;
    for (int i = 2; i <= b; i++) {
        int cnt = 0, tmp = i;
        while(true) {
            if (a <= tmp && tmp <= b) cnt++;
            if (cnt == 2 || tmp > b) break;
            tmp += i;
        }
        if (cnt == 2) ans = max(ans, i);
    }
    cout << ans << endl;
}

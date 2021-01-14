#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        bool t = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                t = false; break;
            }
        }
        if (t == true && i % 2 == 0) ans++;
    }
    cout << ans << endl;
}

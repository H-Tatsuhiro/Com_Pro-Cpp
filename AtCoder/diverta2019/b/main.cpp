#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int r, g, b, n; cin >> r >> g >> b >> n;
    long long int ans = 0;
    int lim_r = n / r, lim_g = n / g;
    for (int i = 0; i <= lim_r; i++) {
        int x = i * r;
        for (int j = 0; j <= lim_g; j++) {
            int y = j * g;
            int m = n - (x + y);
            if (x + y > n) continue;
            if (fmod((m * 1.0) / (b * 1.0), 1.0) == 0)  ans++;
        }
    }
    cout << ans << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> x(n, 0), y(n, 0), h(n, 0);
    long long int v = -1, w = -1, z = -1;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> h[i];
        if (h[i] >= 1) v = x[i], w = y[i], z = h[i];
    }
    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            long long int p = max(abs(v - i) + abs(w - j) + z, 0LL);
            bool t = true;
            for (int k = 0; k < n; k++) {
                long long int tmp = max(0LL, p - abs(x[k] - i) - abs(y[k] - j));
                if (h[k] != tmp) {
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << i << " " << j << " " << p << endl;
                return 0;
            }
        }
    }
}

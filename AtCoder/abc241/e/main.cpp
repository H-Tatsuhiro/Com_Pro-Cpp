#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, k; cin >> n >> k;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<long long int> g(n, -1), h(n, -1);
    long long int t = 0, c = 0, C = 0, x = 0, y = 0;
    while(true) {
        if (t == k) {
            cout << c << endl;
            return 0;
        }
        if (g[c % n] != -1) {
            x = g[c % n], y = t, C = c - h[c % n];
            break;
        }
        g[c % n] = t, h[c % n] = c, t++, c += a[c % n];
    }
    long long int m = (k - y) / (y - x), p = y + m * (y - x), q = c + m * C;
    while (p < k) p++, q += a[q % n];
    cout << q << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, k; cin >> n >> k;
    vector<long long int> a(n, 0), b(n, -1);
    for (int i = 0; i < n; i++) cin >> a[i], a[i]--;
    long long int t = 1, c = 0, x = 0, y = 0;
    while(true) {
        if (t == k + 1) {
            cout << c + 1 << endl;
            return 0;
        }
        if (b[c] != -1) {
            x = b[c], y = t;
            break;
        }
        b[c] = t, t++, c = a[c];
    }
    long long int d = y - x, m = (k - y) / d, p = y + m * d;
    while (p <= k) p++, c = a[c];
    cout << c + 1 << endl;
}
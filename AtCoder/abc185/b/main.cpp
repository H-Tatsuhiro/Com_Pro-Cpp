#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, m, t; cin >> n >> m >> t;
    long long int x = n, now = 0;
    for (int i = 0; i < m; i++) {
        long long int a, b; cin >> a >> b;
        n -= (a - now);
        if (n <= 0) {
            cout << "No" << endl;
            return 0;
        }
        if (n + (b - a) >= x) n = x;
        else n += (b - a);
        now = b;
    }
    n -= (t - now);
    if (n <= 0) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}

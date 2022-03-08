#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> a(n + 1, 0), b(2 * n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= 2 * n; i++) b[i] = b[i - 1] + a[i % n + 1];
    if (b[n] % 10LL != 0LL) {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i <= n; i++) {
        long long int x = b[i] + b[n] / 10LL, j = lower_bound(b.begin(), b.end(), x) - b.begin();
        if (x == b[j]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    vector<long long int> a(n, 0);
    for (int i = 1; i < n; i++) {
        long long int ans = 0;
        for (int j = 1; j <= sqrt(i); j++) {
            if (i % j == 0) {
                if (j == i / j) ans++;
                else ans += 2;
            }
        }
        a[i] = ans;
    }
    long long int res = 0;
    for (int i = 1; i < n; i++) res += a[i] * a[n - i];
    cout << res << endl;
}



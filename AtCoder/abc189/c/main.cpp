#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int ans = -1;
    for (int i = 0; i < n; i++) {
        long long int m = 10e7;
        for (int j = i; j < n; j++) {
            m = min(m, a[j]);
            ans = max(ans, m * (j - i + 1));
        }
    }
    cout << ans << endl;
}

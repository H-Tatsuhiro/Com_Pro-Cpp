#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int ans = 1000000000000000000;
    vector<long long int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long int sum = 0;
            for (int k = 0; k < n; k++) sum += abs(a[i] - a[k]) + abs(a[k] - b[k]) + abs(b[j] - b[k]);
            ans = min(ans, sum);
        }
    }
    cout << ans << endl;
}

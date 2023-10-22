#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, d, p; cin >> n >> d >> p;
    vector<int> f(n, 0);
    for (int i = 0; i < n; i++) cin >> f[i];
    sort(f.begin(), f.end());
    long long int ans = 0, sum = 0, cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
        cnt++, sum += f[i];
        if (cnt == d) {
            if (sum > p) ans += p;
            else ans += sum;
            cnt = 0, sum = 0;
        }
    }
    if (sum > p) ans += p;
    else ans += sum;
    cout << ans << endl;
}
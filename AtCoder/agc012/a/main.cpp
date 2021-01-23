#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> a(3 * n, 0);
    for (int i = 0; i < 3 * n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    long long int ans = 0;
    int cnt = 0, i = 1;
    while(cnt < n) {
        ans += a[i];
        i += 2, cnt++;
    }
    cout << ans << endl;
}

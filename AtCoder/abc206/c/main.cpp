#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    long long int ans = 0, prev = -1, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (prev == a[i]) cnt++;
        else ans += cnt * (n - i), prev = a[i], cnt = 1;
    }
    cout << ans << endl;
}

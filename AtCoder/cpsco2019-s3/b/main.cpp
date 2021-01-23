#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int cnt = 0, sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum += a[i], cnt++;
        if (sum >= m) break;
    }
    cout << cnt << endl;
}

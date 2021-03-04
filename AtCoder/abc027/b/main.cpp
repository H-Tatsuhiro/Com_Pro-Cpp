#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, sum = 0; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int p = sum / n;
    if (p * n != sum) {
        cout << -1 << endl;
        return 0;
    }
    int cnt = 0, l = 0;
    for (int i = 0; i < n - 1; i++) {
        l += a[i], sum -= a[i];
        if ((i + 1) * p > l || (n - (i + 1)) * p > sum) cnt++;
    }
    cout << cnt << endl;
}

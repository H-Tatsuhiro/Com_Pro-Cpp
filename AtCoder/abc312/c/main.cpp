#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n, 0), b(m, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end()), sort(b.begin(), b.end());
    int left = 0, right = 1e9 + 1;
    while (right - left > 1) {
        int mid = (right + left) / 2;
        auto it = upper_bound(a.begin(), a.end(), mid);
        auto it2 = lower_bound(b.begin(), b.end(), mid);
        auto da = distance(a.begin(), it), db = distance(it2, b.end());
        if (da >= db) right = mid;
        else left = mid;
    }
    cout << left + 1 << endl;
}
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int cnt = 0;
    for (int i = 0; i < n; i++) cnt += abs(a[i] - b[i]);
    if (k - cnt >= 0 && (k - cnt) % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}

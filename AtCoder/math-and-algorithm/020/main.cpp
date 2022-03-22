#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int ans = 0;
    for (int i = 0; i < n - 4; i++) for (int j = i + 1; j < n - 3; j++) for (int k = j + 1; k < n - 2; k++) for (int l = k + 1; l < n - 1; l++) for (int m = l + 1; m < n; m++) if (a[i] + a[j] + a[k] + a[l] + a[m] == 1000) ans++;
    cout << ans << endl;
}

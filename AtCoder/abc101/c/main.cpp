#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 0; i < n; ) {
        if (i == 0) i += k;
        else i += k - 1;
        ans++;
    }
    cout << ans << endl;
}

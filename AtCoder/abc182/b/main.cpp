#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0, tmp = 0;
    for (int i = 2; i <= 1000; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) if (a[j] % i == 0) cnt++;
            if (cnt > tmp) ans = i, tmp = cnt;
    }
    cout << ans << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<int> b(m + 1, 0);
    for (int i = 1; i <= m; i++) cin >> b[i];
    int now = 1;
    for (int i = 1; i <= m; i++) {
        now += b[i];
        if (now >= n) {
            cout << i << endl;
            return 0;
        }
        now += a[now];
        if (now >= n) {
            cout << i << endl;
            return 0;
        }
    }
}

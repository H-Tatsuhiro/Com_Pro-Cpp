#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n, 0), ans(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) {
        int c; cin >> c;
        for (int j = 0; j < n; j++) {
            if (a[j] <= c) {
                ans[j]++;
                break;
            }
        }
    }
    int ma = 0, tmp = -1;
    for (int i = 0; i < n; i++) {
        if (tmp < ans[i]) {
            tmp = ans[i];
            ma = i + 1;
        }
    }
    cout << ma << endl;
}

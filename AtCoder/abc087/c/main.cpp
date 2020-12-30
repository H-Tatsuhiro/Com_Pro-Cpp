#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> a(2, vector<int>(n, 0));
    for (int i = 0; i < 2; i++) for (int j = 0; j < n; j++) cin >> a[i][j];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0; bool t = false;
        for (int j = 0; j < n; j++) {
            if (!t) sum += a[0][j];
            if (i == j) t = true;
            if (t) sum += a[1][j];
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> v(101, vector<int>(101, 0));
    for (int i = 0; i < n; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        for (int j = a; j < b; j++) for (int k = c; k < d; k++) v[j][k]++;
    }
    int ans = 0;
    for (int i = 0; i < 101; i++) for (int j = 0; j < 101; j++) if (v[i][j] > 0) ans++;
    cout << ans << endl;
}



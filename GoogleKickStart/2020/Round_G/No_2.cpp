//
// Created by Tatsuhiro Hashimoto on 2020/10/18.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int m; cin >> m;
        vector<vector<long long int>> matrix(m, vector<long long int>(m, 0));
        for (int j = 0; j < m; j++) for (int k = 0; k < m; k++) cin >> matrix[j][k];
        long long int ans = 0;

        for (int j = 0; j < m; j++) {
            long long int x = 0, y = 0;

            int a = m - 1 - j, b = m - 1 - j, c = m - 1, d = m - 1;

            while (a > -1 && b > -1 && c > -1 && d > -1) {
                x += matrix[c][a], y += matrix[b][d];
                a--, b--, c--, d--;

            }


            ans = max(ans, max(x, y));
        }
        cout << "Case #" << i + 1 << ": " << ans << endl;
    }
}

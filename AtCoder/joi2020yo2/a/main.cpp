#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<char>> s(n, vector<char>(n, '-')), t(n, vector<char>(n, '-'));
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> s[i][j];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> t[i][j];
    function<void()> rotate = [&]() -> void {
        vector<vector<char>> v(n, vector<char>(n, '-'));
        for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) v[j][n - i - 1] = s[i][j];
        s = v;
    };
    function<int(vector<vector<char>>, int)> check = [&](vector<vector<char>> x, int k) -> int {
        int cnt = k;
        for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (x[i][j] != t[i][j]) cnt++;
        rotate();
        return cnt;
    };
    function<int()> solve = [&]() -> int {
        int ans = 10e8;
        for (int l = 0; l < 4; l++) {
            if (l == 3) ans = min(ans, check(s, 1));
            else ans = min(ans, check(s, l));
        }
        return ans;
    };
    cout << solve() << endl;
}

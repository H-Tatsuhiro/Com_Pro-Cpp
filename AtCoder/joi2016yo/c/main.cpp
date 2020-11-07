#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m, cnt = 0; cin >> n >> m;
    vector<vector<int>> flag_colors(n, vector<int>(3, 0));
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'W') flag_colors[i][0]++;
            else if (s[j] == 'B') flag_colors[i][1]++;
            else flag_colors[i][2]++;
        }
    }
    int ans = 10e7;

    for (int i = 1; i < n - 1; i++) {
        int white = 0;
        for (int j = 0; j < i; j++) white += flag_colors[j][1] + flag_colors[j][2];
        for (int j = 1; i + j < n; j++) {
            int blue = 0;
            for (int k = i; k < i + j; k++) blue += flag_colors[k][0] + flag_colors[k][2];
            int red = 0;
            for (int k = i + j; k < n; k++) red += flag_colors[k][0] + flag_colors[k][1];
            ans = min(ans, white + blue + red);
        }
    }
    cout << ans << endl;
}

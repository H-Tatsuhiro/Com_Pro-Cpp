#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    long long int ans = 0;
    vector<vector<int>> v(n, vector<int>(4, 0));
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') v[i][0]++;
        else if (s[i] == 'T') v[i][1]++;
        else if (s[i] == 'C') v[i][2]++;
        else v[i][3]++;
        if (i < n - 1) for (int j = 0; j < 4; j++) v[i + 1][j] = v[i][j];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (i == 0) {
                if (v[j][0] == v[j][1] && v[j][2] == v[j][3]) ans++;
            }
            else if (v[j][0] - v[i - 1][0] == v[j][1] - v[i - 1][1] && v[j][2] - v[i - 1][2] == v[j][3] - v[i - 1][3]) ans++;
        }
    }
    cout << ans << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m, h, k; cin >> n >> m >> h >> k;
    string s; cin >> s;
    unordered_map<string, bool> Map;
    for (int i = 0; i < m; i++) {
        int v, w; cin >> v >> w;
        string t = to_string(v) + '_' + to_string(w);
        Map[t] = true;
    }
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        h--;
        if (h < 0) break;
        if (s[i] == 'R') x++;
        if (s[i] == 'L') x--;
        if (s[i] == 'U') y++;
        if (s[i] == 'D') y--;
        string t = to_string(x) + '_' + to_string(y);
        if (Map[t] && h < k) h = k, Map[t] = false;
        if (i == n - 1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}



#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<string> s(h, "");
    int ans = 0;
    for (int i = 0; i < h; i++) cin >> s[i];
    for (int i = 1; i < h - 1; i++) {
        for (int j = 1; j < w - 1; j++) {
            if (s[i][j] == '.') continue;
            if (s[i - 1][j - 1] == '.' && s[i - 1][j] == '.' && s[i][j - 1] == '.') ans++;
            if (s[i - 1][j] == '.' && s[i][j + 1] == '.' && s[i - 1][j + 1] == '.') ans++;
            if (s[i][j + 1] == '.' && s[i + 1][j] == '.' && s[i + 1][j + 1] == '.') ans++;
            if (s[i + 1][j] == '.' && s[i + 1][j - 1] == '.' && s[i][j - 1] == '.') ans++;
        }
    }
    for (int i = 1; i < h - 1; i++) {
        for (int j = 1; j < w - 1; j++) {
            if (s[i][j] == '#') continue;
            if (s[i - 1][j - 1] == '#' && s[i - 1][j] == '#' && s[i][j - 1] == '#') ans++;
            if (s[i - 1][j] == '#' && s[i][j + 1] == '#' && s[i - 1][j + 1] == '#') ans++;
            if (s[i][j + 1] == '#' && s[i + 1][j] == '#' && s[i + 1][j + 1] == '#') ans++;
            if (s[i + 1][j] == '#' && s[i + 1][j - 1] == '#' && s[i][j - 1] == '#') ans++;
        }
    }
    cout << ans << endl;
}

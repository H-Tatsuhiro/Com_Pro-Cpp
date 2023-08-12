#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<string> s(h, "");
    for (int i = 0; i < h; i++) cin >> s[i];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '.') {
                int cnt = 0;
                if (i + 1 < h && s[i + 1][j] == '#') cnt++;
                if (j + 1 < w && s[i][j + 1] == '#') cnt++;
                if (i - 1 >= 0 && s[i - 1][j] == '#') cnt++;
                if (j - 1 >= 0 && s[i][j - 1] == '#') cnt++;
                if (cnt >= 2) cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
}



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
            if (s[i][j] == '#') {
                bool t = false;
                if (i - 1 >= 0) if (s[i - 1][j] == '#') t = true;
                if (i + 1 < h) if (s[i + 1][j] == '#') t = true;
                if (j - 1 >= 0) if (s[i][j - 1] == '#') t = true;
                if (j + 1 < w) if (s[i][j + 1] == '#') t = true;
                if (!t) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
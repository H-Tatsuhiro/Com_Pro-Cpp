#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<string> S(h, "");
    for (int i = 0; i < h; i++) cin >> S[i];
    long long int cnt = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (j + 1 < w) {
                if (S[i][j] == '.' && S[i][j + 1] == '.') cnt++;
            }
        }
    }
    for (int j = 0; j < w; j++) {
        for (int i = 0; i < h; i++) {
            if (i + 1 < h) {
                if (S[i][j] == '.' && S[i + 1][j] == '.') cnt++;
            }
        }
    }
    cout << cnt << endl;
}

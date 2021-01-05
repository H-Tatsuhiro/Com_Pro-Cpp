#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w, K; cin >> h >> w >> K;
    vector<vector<char>> v(h, vector<char>(w, '_'));
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> v[i][j];
    int ans = 0;
    for (int bit_a = 0; bit_a < (1 << h); bit_a++) {
        for (int bit_b = 0; bit_b < (1 << w); bit_b++) {
            int cnt = 0;
            for (int i = 0; i < h; i++) {
                for (int j = 0; j < w; j++) {
                    if ((bit_a & (1 << i)) || (bit_b & (1 << j))) continue;
                    else if (v[i][j] == '#') cnt++;
                }
            }
            if (cnt == K) ans++;
        }
    }
    cout << ans << endl;
}

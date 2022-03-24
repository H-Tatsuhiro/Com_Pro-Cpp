#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int H, W; cin >> H >> W;
    vector<string> A(H, "");
    bool ans = true;
    for (int i = 0; i < H; i++) cin >> A[i];
    int now = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < now; j++) if (A[i][j] == '#') ans = false;
        for (int j = now; j < W; j++) {
            if (A[i][j] == '#') now = j;
            else break;
        }
        for (int j = now + 1; j < W; j++) if (A[i][j] == '#') ans = false;
    }
    cout << (ans ? "Possible" : "Impossible") << endl;
}
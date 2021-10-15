#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int W, H, N; cin >> W >> H >> N;
    vector<int> X(W, 0), Y(H, 0);
    for (int i = 0; i < N; i++) {
        int x, y, a; cin >> x >> y >> a;
        if (a == 1) for (int j = 0; j < x; j++) X[j]++;
        if (a == 2) for (int j = x; j < W; j++) X[j]++;
        if (a == 3) for (int j = 0; j < y; j++) Y[j]++;
        if (a == 4) for (int j = y; j < H; j++) Y[j]++;
    }
    int p = 0, q = 0;
    for (int i = 0; i < W; i++) if (!X[i]) p++;
    for (int i = 0; i < H; i++) if (!Y[i]) q++;
    cout << p * q << endl;
}

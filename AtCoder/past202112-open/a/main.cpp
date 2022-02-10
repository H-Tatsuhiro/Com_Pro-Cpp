#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int H, W, h, w; cin >> H >> W >> h >> w;
    if (h >= H && w <= W) cout << "Yes" << endl;
    else cout << "No" << endl;
}

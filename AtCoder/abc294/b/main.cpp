#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w, a; cin >> h >> w;
    vector<vector<char>> b(h, vector<char>(w, ' '));
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> a, b[i][j] = (a == 0 ? '.' : char('A' + a - 1));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) cout << b[i][j];
        cout << endl;
    }
}



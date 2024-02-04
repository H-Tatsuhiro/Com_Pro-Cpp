#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w, n; cin >> h >> w >> n;
    vector<vector<char>> v(h, vector<char>(w, '.'));
    int x = 0, y = 0;
    char z = 'U';
    for (int i = 0; i < n; i++) {
        if (x == -1) x = h - 1;
        else if (x == h) x = 0;
        if (y == -1) y = w - 1;
        else if (y == w) y = 0;
        if (v[x][y] == '.') {
            v[x][y] = '#';
            if (z == 'U') {
                z = 'R';
                y++;
            }
            else if (z == 'D') {
                z = 'L';
                y--;
            }
            else if (z == 'R') {
                z = 'D';
                x++;
            }
            else {
                z = 'U';
                x--;
            }
        }
        else {
            v[x][y] = '.';
            if (z == 'U') {
                z = 'L';
                y--;
            }
            else if (z == 'D') {
                z = 'R';
                y++;
            }
            else if (z == 'R') {
                z = 'U';
                x--;
            }
            else {
                z = 'D';
                x++;
            }
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) cout << v[i][j];
        cout << endl;
    }
}



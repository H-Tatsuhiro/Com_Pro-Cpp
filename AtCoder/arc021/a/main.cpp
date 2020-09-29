#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};
int main() {
    vector<vector<int>> v(4, vector<int>(4, 0));
    for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) cin >> v[i][j];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                int nx = j + dx[k], ny = i + dy[k];
                if (0 <= nx && nx <= 3 && 0 <= ny && ny <= 3 &&
                    v[ny][nx] == v[i][j]) {
                    cout << "CONTINUE" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "GAMEOVER" << endl;
    return 0;
}
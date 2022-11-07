#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<char>> v(n, vector<char>(n, '-'));
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> v[i][j];
    bool t = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if ((v[i][j] == 'W' && v[j][i] != 'L') || (v[i][j] == 'L' && v[j][i] != 'W') || (v[i][j] == 'D' && v[j][i] != 'D')) t = false;
        }
    }
    cout << (t ? "correct" : "incorrect") << endl;
}

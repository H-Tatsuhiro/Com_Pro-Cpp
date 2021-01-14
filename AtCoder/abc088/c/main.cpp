#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> c(3, vector<int>(3, 0));
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) cin >> c[i][j];
    bool t = true;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (c[i][j] - c[i][j + 1] - c[i + 1][j] + c[i + 1][j + 1] != 0) {
                t = false;
                break;
            }
        }
    }

    if (t) cout << "Yes" << endl;
    else cout << "No" << endl;
}

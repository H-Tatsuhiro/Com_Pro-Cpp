//
// Created by privath(Tatsuhiro Hashimoto) on 2022/04/02.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t; cin >> t;
    for (int Case = 1; Case <= t; Case++) {
        int r, c; cin >> r >> c;
        vector<vector<char>> ans(2 * r + 1, vector<char>(2 * c + 1, '.'));
        for (int i = 0; i < 2 * r + 1; i++) {
            for (int j = 0; j < 2 * c + 1; j++) {
                if (i % 2 != 0 && j % 2 == 0) ans[i][j] = '|';
                else if (i % 2 == 0) {
                    if (j % 2 == 0) ans[i][j] = '+';
                    else ans[i][j] = '-';
                }
            }
        }
        ans[0][0] = ans[0][1] = ans[1][0] = '.';
        cout << "Case #" << Case << ':' << endl;
        for (int i = 0; i < 2 * r + 1; i++) {
            for (int j = 0; j < 2 * c + 1; j++) cout << ans[i][j];
            cout << endl;
        }
    }
}

// Passed all test.

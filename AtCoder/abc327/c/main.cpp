#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> a(9, vector<int>(9, 0));
    for (int i = 0; i < 9; i++) for (int j = 0; j < 9; j++) cin >> a[i][j];
    vector<int> s(9, 1);
    bool t = true;
    for (int i = 0; i < 9; i++) {
        vector<int> tmp(9, 0);
        for (int j = 0; j < 9; j++) tmp[a[i][j] - 1]++;
        if (tmp != s) t = false;
    }
    for (int i = 0; i < 9; i++) {
        vector<int> tmp(9, 0);
        for (int j = 0; j < 9; j++) tmp[a[j][i] - 1]++;
        if (tmp != s) t = false;
    }
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            vector<int> tmp(9, 0);
            for (int k = 0; k < 3; k++) for (int l = 0; l < 3; l++) tmp[a[i + k][j + l] - 1]++;
            if (tmp != s) t = false;
        }
    }
    cout << (t ? "Yes" : "No") << endl;
}



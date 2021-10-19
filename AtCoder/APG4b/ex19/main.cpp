#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x = 0, y = 0;
    vector<vector<int>> a(9, vector<int>(9, 0));
    for (int i = 0; i < 9; i++) for (int j = 0; j < 9; j++) cin >> a[i][j];
    vector<vector<int>> b(9, vector<int>(9, 0));
    for (int i = 0; i < 9; i++) for (int j = 0; j < 9; j++) b[i][j] = (i + 1) * (j + 1);
    for (int i = 0; i < 9; i++) for (int j = 0; j < 9; j++) cout << b[i][j] << (j == 8 ? '\n' : ' ');
    for (int i = 0; i < 9; i++) for (int j = 0; j < 9; j++) x += (a[i][j] == b[i][j]), y += (a[i][j] != b[i][j]);
    cout << x << endl << y << endl;
}

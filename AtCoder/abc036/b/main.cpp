#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<char>> vec(n, vector<char>(n, '.'));
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> vec[i][j];
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            cout << vec[j][i];
        }
        cout << endl;
    }
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<char>> v(n, vector<char>(9, '-'));
    for (int i = 0; i < n; i++) for (int j = 0; j < 9; j++) cin >> v[i][j];
    long long int ans = 0;
    for (int i = 0; i < 9; i++) {
        bool t = false;
        for (int j = n - 1; j >= 0; j--) {
            if (v[j][i] != 'o' && t == true) t = false;
            if (v[j][i] == 'x') ans++;
            else if (v[j][i] == 'o' && t == false) ans++, t = true;
        }
    }
    cout << ans << endl;
}

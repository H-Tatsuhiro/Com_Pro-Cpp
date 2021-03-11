#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    vector<vector<bool>> user(n, vector<bool>(n, false));
    for (int i = 0; i < q; i++) {
        int a; cin >> a;
        if (a == 1) {
            int b, c; cin >> b >> c;
            user[b - 1][c - 1] = true;
        }
        else if (a == 2) {
            int b; cin >> b;
            for (int j = 0; j < n; j++) if (user[j][b - 1]) user[b - 1][j] = true;
        }
        else {
            int b; cin >> b;
            vector<int> tmp;
            for (int j = 0; j < n; j++) {
                if (user[b - 1][j]) {
                    for (int k = 0; k < n; k++) {
                        if (user[j][k] && k != b - 1) tmp.push_back(k);
                    }
                }
            }
            for (auto x : tmp) user[b - 1][x] = true;
        }
    }
    for (int i = 0; i < n; i++) {
        string s = "";
        for (int j = 0; j < n; j++) s += 'N';
        for (int j = 0; j < n; j++) if (user[i][j]) s[j] = 'Y';
        cout << s << endl;
    }
}

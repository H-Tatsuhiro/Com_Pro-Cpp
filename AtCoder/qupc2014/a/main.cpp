#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    vector<vector<int>> e(c, vector<int>(a, 0));
    for (int i = 0; i < c; i++) for (int j = 0; j < a; j++) cin >> e[i][j];
    for (int i = 100; i >= 0; i--) {
        int cnt = 0;
        for (int j = 0; j < c; j++) {
            int sum = 0;
            for (int k = 0; k < a; k++) if (i <= e[j][k]) sum++;
            if (sum >= b) cnt++;
        }
        if (cnt >= d) {
            cout << i << endl;
            break;
        }
    }
}

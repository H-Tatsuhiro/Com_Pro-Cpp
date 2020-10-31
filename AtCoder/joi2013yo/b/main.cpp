#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> v(n, vector<int>(4, 0));
    for (int i = 0; i < n; i++) cin >> v[i][0] >> v[i][1] >> v[i][2];

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < n; j++) {
            bool t = false;
            for (int k = 0; k < n; k++) {
                if (j == k) continue;
                if (v[j][i] == v[k][i]) t = true;
                if (t) break;
            }
            if (!t) v[j][3] += v[j][i];
        }

    }


    for (int i = 0; i < n; i++) cout << v[i][3] << endl;
}

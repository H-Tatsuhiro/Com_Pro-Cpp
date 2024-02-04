#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    string r, c; cin >> r >> c;
    vector<int> x, y, z;
    for (int i = 0; i < n; i++) x.push_back(i), y.push_back(i), z.push_back(i);
    do {
        do {
            do {
                vector<vector<char>> v(n, vector<char>(n, '.'));
                bool f = false;
                for (int i = 0; i < n; i++) {
                    v[i][x[i]] = 'A';
                    if (v[i][y[i]] != '.') f = true;
                    v[i][y[i]] = 'B';
                    if (v[i][z[i]] != '.') f = true;
                    v[i][z[i]] = 'C';
                }
                if (f) continue;
                string p = "", q = "";
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (v[i][j] != '.') {
                            p += v[i][j];
                            break;
                        }
                    }
                }
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (v[j][i] != '.') {
                            q += v[j][i];
                            break;
                        }
                    }
                }
                if (r == p && c == q) {
                    cout << "Yes" << endl;
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) cout << v[i][j];
                        cout << endl;
                    }
                    return 0;
                }
            } while (next_permutation(z.begin(), z.end()));
        } while (next_permutation(y.begin(), y.end()));
    } while (next_permutation(x.begin(), x.end()));
    cout << "No" << endl;
    return 0;
}



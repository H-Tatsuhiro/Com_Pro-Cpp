#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, a, b, p, q, r, s; cin >> n >> a >> b >> p >> q >> r >> s;
    vector<vector<char>> v(q - p + 1, vector<char>(s - r + 1, '.'));
    long long int w = max(1 - a, 1 - b), x = min(n - a, n - b), y = max(1 - a, b - n), z = min(n - a, b - 1);
    for (long long int i = p; i <= q; i++) {
        for (long long int j = r; j <= s; j++) {
            if (i - a == j - b) {
                if (w <= i - a && i - a <= x) v[i - p][j - r] = '#';
            }
            if (a + b == i + j) {
                if (y <= i - a && i - a <= z) v[i - p][j - r] = '#';
            }
        }
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) cout << v[i][j];
        cout << endl;
    }
}

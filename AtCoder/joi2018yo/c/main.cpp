#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
long long int calc(vector<vector<int>> a, int x, int y, int n, int m) {
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            sum += a[i][j] * min(abs(i - x), abs(j - y));
        }
    }
    return sum;
}
int main() {
    int h, w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w, 0));
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> a[i][j];
    long long int sum = 10e7;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            sum = min(sum, calc(a, i, j, h, w));
        }
    }
    cout << sum << endl;
}

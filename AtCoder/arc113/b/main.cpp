#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/math>
using namespace std;
int main() {
    long long int a, b, c; cin >> a >> b >> c;
    long long int x = atcoder::pow_mod(b, c, 4);
    vector<vector<int>> v = {
            {0, 0, 0, 0},
            {1, 1, 1, 1},
            {6, 2, 4, 8},
            {1, 3, 9, 7},
            {6, 4, 6, 4},
            {5, 5, 5, 5},
            {6, 6, 6, 6},
            {1, 7, 9, 3},
            {6, 8, 4, 2},
            {1, 9, 1, 9}
    };
    long long int ans = v[a % 10][x];
    cout << ans << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<long long int>> a(n, vector<long long int>(6, 0));
    for (int i = 0; i < n; i++) for (int j = 0; j < 6; j++) cin >> a[i][j];
    long long int mod = 1000000007;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < 6; j++) a[i][0] += a[i][j], a[i][0] %= mod;
        if (i > 0) a[0][0] *= a[i][0], a[0][0] %= mod;
    }
    cout << a[0][0] << endl;
}

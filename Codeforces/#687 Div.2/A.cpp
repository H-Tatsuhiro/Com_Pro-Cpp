//
// Created by Tatsuhiro Hashimoto on 2020/11/29.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        long long int n, m, r, c; cin >> n >> m >> r >> c;
        long long int rmax = max(abs(1 - r), abs(n - r)), cmax = max(abs(1 - c), abs(m - c));
        cout << cmax + rmax << endl;
    }
}

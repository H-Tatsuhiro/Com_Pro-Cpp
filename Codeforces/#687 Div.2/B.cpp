//
// Created by Tatsuhiro Hashimoto on 2020/11/29.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        long long int n, k; cin >> n >> k;
        vector<int> c(n, 0);
        for (int j = 0; j < n; j++) cin >> c[j];
        long long int ans = 10e6;
        for (int i = 1; i <= 100; i++) {
            long long int dif = 0;
            for (int j = 0; j < n; j++) {
                if (c[j] != i) {
                    j = (j + k) - 1, dif++;
                }
            }
            ans = min(ans, dif);
        }
        cout << ans << endl;
    }
}

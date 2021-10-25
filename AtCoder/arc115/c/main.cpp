#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n + 1, 1);
    function<int(int)> ans = [](int v) {
        int res = 1;
        if (v == 1) return res;
        for (int j = 2; j <= sqrt(v); j++) {
            while (v % j == 0) {
                res++;
                v /= j;
            }
        }
        if (v > 1) res++;
        return res;
    };
    for (int i = 1; i <= n; i++) cout << ans(i) << (i == n ? '\n' : ' ');
}

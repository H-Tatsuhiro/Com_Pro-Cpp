#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    long long int n, C; cin >> n >> C;
    vector<pair<long long int, long long int>> v;
    for (int i = 0; i < n; i++) {
        long long int a, b, c; cin >> a >> b >> c;
        v.emplace_back(a - 1, c), v.emplace_back(b, -c);
    }
    sort(v.begin(), v.end());
    cpp_int ans = 0;
    long long int p = 0, t = 0;
    for (auto [x, y] : v) {
        if (x != t) ans += min(C, p) * (x - t), t = x;
        p += y;
    }
    cout << ans << endl;
}

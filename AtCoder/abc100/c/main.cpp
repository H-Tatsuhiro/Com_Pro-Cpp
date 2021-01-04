#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    int n; cin >> n;
    vector<cpp_int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    cpp_int ans = 0;
    for (int i = 0; i < n; i++) {
        cpp_int cnt = 0;
        while (true) {
            if (a[i] % 2 != 0) break;
            else a[i] /= 2, cnt++;
        }
        ans += cnt;
    }
    cout << ans << endl;
}

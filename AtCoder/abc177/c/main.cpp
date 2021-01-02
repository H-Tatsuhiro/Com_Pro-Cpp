#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    cpp_int sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; sum += a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        ans += (sum -= a[i]) * a[i];
    }
    cout << ans % 1000000007 << endl;
}

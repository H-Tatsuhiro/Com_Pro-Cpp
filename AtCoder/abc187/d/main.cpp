#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> v(n, 0);
    cpp_int c = 0;
    for (int i = 0; i < n; i++) {
        long long int a, b; cin >> a >> b;
        c -= a, v[i] = 2 * a + b;
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        c += v[i];
        ans++;
        if (c > 0) break;
    }
    cout << ans << endl;
}

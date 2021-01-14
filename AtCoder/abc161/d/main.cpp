#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/lexical_cast.hpp>
using namespace boost::multiprecision;
using namespace std;
void solve(cpp_int x, vector<cpp_int> &v) {
    if (x > 3234566667) return;
    v.push_back(x);
    cpp_int base = x * 10, m = x % 10;
    for (int i = -1; i <= 1; i++) {
        if (m + i >= 0 && m + i <= 9) solve(base + (m + i), v);
    }
}
int main() {
    int k; cin >> k;
    vector<cpp_int> v;
    for (int i = 1; i <= 9; i++) solve(i, v);
    sort(v.begin(), v.end());
    cout << v[k - 1] << endl;
}

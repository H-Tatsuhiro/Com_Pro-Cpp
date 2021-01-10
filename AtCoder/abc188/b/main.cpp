#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b(n, 0);
    cpp_int ans = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) ans += a[i] * b[i];
    if (ans == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}

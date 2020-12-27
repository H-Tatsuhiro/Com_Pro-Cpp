#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
int main() {
    int n, k; cin >> n >> k;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    cpp_int sum = 0, j = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i] + j;
        j++;
    }
    cout << sum << endl;
}

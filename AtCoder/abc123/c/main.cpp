#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    long long int n; cin >> n;
    vector<long long int> a(5, 0);
    for (int i = 0; i < 5; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if (n % a[0] == 0) n = n / a[0];
    else n = (n / a[0]) + 1;
    cout << n + 4 << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main() {
    int d; cin >> d;
    cpp_int mini = 10000000000000, sum = 0;
    vector<int> a(d, 0);
    for (int i = 0; i < d; i++) cin >> a[i];
    for (int i = 0; i < d; i++) {
        cpp_int b; cin >> b; sum += (cpp_int)a[i];
        if (sum >= b) mini = min(mini, b);
    }
    if (mini == 10000000000000) mini = -1;
    cout << mini << endl;
}

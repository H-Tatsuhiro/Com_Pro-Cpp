#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n; cin >> n;
    long double sum = 0.0;
    vector<int> r(n, 0);
    for (int i = 0; i < n; i++) cin >> r[i];
    sort(r.begin(), r.end());
    reverse(r.begin(), r.end());
    for (int i = 0; i < n; i++) {
        if (i == 0 || i % 2 == 0) sum += (long double)(r[i] * r[i] * 3.1415926535);
        else sum -= (long double)(r[i] * r[i] * 3.1415926535);
    }
    cout << setprecision(100) << sum << endl;
}

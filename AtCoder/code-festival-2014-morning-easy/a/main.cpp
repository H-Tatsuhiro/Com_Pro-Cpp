#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    double n; cin >> n;
    vector<double> a(n, 0.0);
    for (double i = 0; i < n; i += 1.0) cin >> a[i];
    double sum = 0.0;
    for (int i = 0; i < n - 1; i++) {
        sum += (a[i + 1] - a[i]);
    }
    cout << setprecision(50) << (long double)sum / (n - 1) << endl;
}

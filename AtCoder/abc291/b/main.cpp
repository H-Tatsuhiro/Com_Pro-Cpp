#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> x(5 * n, 0);
    for (int i = 0; i < 5 * n; i++) cin >> x[i];
    sort(x.begin(), x.end());
    long double sum = 0;
    for (int i = n; i < 4 * n; i++) sum += x[i];
    cout << fixed << setprecision(10) << sum / (3 * n) << endl;
}



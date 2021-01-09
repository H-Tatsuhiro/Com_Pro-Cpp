#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int m, n; cin >> m >> n;
    int t = m;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        if (i < n - 1) a[i] = m / n, t -= (m / n);
        else a[i] = t;
    }
    cout << a[n - 1] << endl;
}

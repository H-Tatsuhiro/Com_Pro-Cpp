#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> x, y;
    for (int i = 0; i < n; i++) {
        long long int a; cin >> a;
        if (a % 2 == 0) x.push_back(a);
        else y.push_back(a);
    }
    if (x.size() > 1 || y.size() > 1) {
        int p = -1, q = -1;
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        if (x.size() > 1) p = x[x.size() - 1] + x[x.size() - 2];
        if (y.size() > 1) q = y[y.size() - 1] + y[y.size() - 2];
        cout << max(p, q) << endl;
    }
    else cout << -1 << endl;
}

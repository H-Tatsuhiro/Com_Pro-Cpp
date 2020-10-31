#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n;
    vector<int> x(n, 0);
    for (int i = 0; i < n; i++) cin >> x[i];
    x.push_back(2020);
    cin >> m;
    for (int i = 0; i < m; i++) {
        int a; cin >> a;
        if (x[a - 1] + 1 < x[a]) x[a - 1]++;
    }
    for (int i = 0; i < n; i++) cout << x[i] << endl;
}

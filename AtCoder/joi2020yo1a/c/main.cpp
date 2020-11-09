#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> c(n + m, 0);
    for (int i = 0; i < n + m; i++) cin >> c[i];
    sort(c.begin(), c.end());
    for (int i = 0; i < n + m; i++) cout << c[i] << endl;
}

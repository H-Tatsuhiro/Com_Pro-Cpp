#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n, 0), b(m, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cout << distance(b.begin(), upper_bound(b.begin(), b.end(), a[i])) + 1 + i << (i == n - 1 ? '\n' : ' ');
    for (int i = 0; i < m; i++) cout << distance(a.begin(), upper_bound(a.begin(), a.end(), b[i])) + 1 + i << (i == m - 1 ? '\n' : ' ');
}



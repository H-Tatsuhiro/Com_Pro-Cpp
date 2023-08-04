#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, p, q, r, s; cin >> n >> p >> q >> r >> s;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = p - 1; i < q; i++) swap(a[i], a[r - 1]), r++;
    for (int i = 0; i < n; i++) cout << a[i] << (i == n - 1 ? "\n" : " ");
}



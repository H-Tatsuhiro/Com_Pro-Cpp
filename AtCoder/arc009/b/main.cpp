#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int b[10], c[10];
int x(int m, int q){
    int r = 0, p = 1;
    while(m > 0) r += (q == 0 ? b[m % 10] : c[m % 10]) * p, m /= 10, p *= 10;
    return r;
}
int main() {
    for (int i = 0; i < 10; i++) cin >> c[i], b[c[i]] = i;
    int n; cin >> n;
    vector a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i], a[i] = x(a[i], 0);
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) cout << x(a[i], 1) << endl;
}

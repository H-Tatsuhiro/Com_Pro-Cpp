#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n / 2; i++) b.push_back(a[i] + a[n - 1 - i]);
    sort(b.begin(), b.end());
    cout << b[n / 2 - 1] - b[0] << endl;
}

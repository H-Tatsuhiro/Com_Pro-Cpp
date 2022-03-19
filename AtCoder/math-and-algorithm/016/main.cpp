#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) a[i + 1] = gcd(a[i], a[i + 1]);
    cout << a[n - 1] << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int x; cin >> x;
    vector<long long int> v(n + 1, 0);
    for (int i = 1; i <= n; i++) v[i] = v[i - 1] + a[i - 1];
    long long int k = x / v[n], l = x % v[n];
    int z = 0;
    for (int i = 0; i <= n; i++) {
        if (l < v[i]) {
            z = i;
            break;
        }
    }
    cout << k * n + z << endl;
}

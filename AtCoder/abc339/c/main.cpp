#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int m = 0, x = 0;
    for (int i = 0; i < n; i++) m += a[i], x = min(x, m);
    cout << m + abs(x) << endl;
}



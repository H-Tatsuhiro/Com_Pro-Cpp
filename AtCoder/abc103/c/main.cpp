#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int ans = 0;
    for (int i = 0; i < n; i++)  ans += a[i] - 1;
    cout << ans << endl;
}

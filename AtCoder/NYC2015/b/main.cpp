#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    long long int sum = a[0], ans = 1;
    for (int i = 1; i < n; i++) if (a[i] > sum) sum += a[i], ans++;
    cout << ans << endl;
}

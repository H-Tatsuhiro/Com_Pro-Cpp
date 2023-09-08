#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    long long int sum = 0;
    for (int i = 0; i < n; i++) cin >> a[i], sum += a[i];
    sort(a.begin(), a.end());
    vector<int> b(n, sum / n);
    for (int i = 0; i < sum % n; i++) b[n - 1 - i]++;
    long long int ans = 0;
    for (int i = 0; i < n; i++) ans += abs(a[i] - b[i]);
    cout << ans / 2 << endl;
}



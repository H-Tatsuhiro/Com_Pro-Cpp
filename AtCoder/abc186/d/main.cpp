#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    vector<int> a(n, 0);
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; sum += a[i];
    }
    sort(a.begin(), a.end());
    long long int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        long long int b = (n - (i + 1)) * a[i];
        long long int c = sum - a[i];
        sum -= a[i];
        ans += c - b;
    }
    cout << ans << endl;
}

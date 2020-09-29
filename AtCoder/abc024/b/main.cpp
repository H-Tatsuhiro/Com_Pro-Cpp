#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, t; cin >> n >> t;
    vector<long long int> a(n, 0);
    long long int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        if (a[i] + t > a[i + 1]) {
            sum += a[i + 1] - a[i];
        }
        else cnt++;
    }
    cout << sum  + (cnt * t) + t << endl;
}

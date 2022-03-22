#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> a(3, 0);
    for (int i = 0; i < n; i++) {
        int b; cin >> b, a[b - 1]++;
    }
    long long int ans = 0;
    for (int i = 0; i < 3; i++) ans += (a[i] * (a[i] - 1)) / 2;
    cout << ans << endl;
}

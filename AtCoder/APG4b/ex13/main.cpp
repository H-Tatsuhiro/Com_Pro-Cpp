#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int ans = 0;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans += a[i];
    }
    ans /= n;
    for (int i = 0; i < n; i++) cout << abs(ans - a[i]) << endl;
}

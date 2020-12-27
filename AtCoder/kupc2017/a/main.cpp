#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum >= k) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

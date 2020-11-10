#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<long long int> a(3, 0), b(3, 0);
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
    long long int ans = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) continue;
            for (int k = 0; k < 3; k++) {
                if (i == k || j == k) continue;
                ans = max(ans, (a[0] / b[i]) * (a[1] / b[j]) * (a[2] / b[k]));
            }
        }
    }
    cout << ans << endl;
}

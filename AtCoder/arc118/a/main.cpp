#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int t, n; cin >> t >> n;
    long long int ans = (100 * n - 1) / t;
    ans += n;
    cout << ans << endl;
}

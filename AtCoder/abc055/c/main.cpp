#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, m; cin >> n >> m;
    long long int ans = min(n, m / 2);
    m -= ans * 2, ans += m / 4;
    cout << ans << endl;
}

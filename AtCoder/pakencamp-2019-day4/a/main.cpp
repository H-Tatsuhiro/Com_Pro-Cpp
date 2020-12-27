#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, ans = 0; cin >> n;
    ans += n / 400;
    n %= 400;
    if (n > 0) cout << ans + 1 << endl;
    else cout << ans << endl;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int a, m, l, r; cin >> a >> m >> l >> r;
    if (a <= 0) l += abs(a), r += abs(a), a = 0;
    else l -= abs(a), r -= abs(a), a = 0;
    if (a > r) cout << (-l) / m - (-r) / m + (-r % m == 0 ? 1 : 0)  << endl;
    else if (a < l) cout << (r / m) - (l / m) + (l % m == 0 ? 1 : 0) << endl;
    else cout << (-l) / m + 1 + r / m << endl;
}


